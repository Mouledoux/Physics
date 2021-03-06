﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class Cloth : MonoBehaviour
{
	void Start()
	{
		MakeCloth();

        strengthMod = FindObjectOfType<StrengthSlider>().GetComponent<Slider>();
        damperMod = FindObjectOfType<DamperSlider>().GetComponent<Slider>();
        gravityMod = FindObjectOfType<GravitySlider>().GetComponent<Slider>();
    }

    void FixedUpdate()
    {
        foreach(GameObject s in springs)
        {
            if (s)
            {
                s.GetComponent<Spring>().strMod = strengthMod.value;
                s.GetComponent<Spring>().dmpMod = damperMod.value;
                s.GetComponent<Spring>().grvMod = gravityMod.value;
            }
            else
            {
                springs.Remove(s);
            }
        }

		if(Input.GetKey(KeyCode.Space))
		{
			windForce += Camera.main.transform.forward * Time.fixedDeltaTime;
			foreach(List<GameObject> t in triangles)
			{
				Vector3 wind = Vector3.zero;
				Vector3 velocity = Vector3.zero;
				Vector3 norm = Vector3.zero;
				float area = 0;

				velocity = t[0].GetComponent<Node>().vel +
						t[1].GetComponent<Node>().vel +
						t[2].GetComponent<Node>().vel;
				velocity /= 3;

				norm = Vector3.Cross(t[0].transform.position.normalized,
				                     t[1].transform.position.normalized);

				area = 0.5f *
					(Vector3.Distance(t[0].transform.position, t[1].transform.position) * 
					 Vector3.Distance(t[0].transform.position, t[2].transform.position));

				wind = velocity.magnitude * windForce;

				foreach(GameObject n in t)
				{
					n.GetComponent<Node>().acl += wind / 3;
				}
			}
		}
		else if (windForce.magnitude > 0)
		{
			windForce -= windForce * Time.fixedDeltaTime;
		}
	}

	/// <summary>
	/// Makes the cloth.
	/// </summary>
	void MakeCloth()
	{
		// stops time to prevent calculations before the gris is made
		Time.timeScale = 0;
		// the current node we are making
		Vector2 key;
		// the position for the node to be
		Vector3 nextPos = transform.localPosition;


		// for every column
		for(int i = 0; i < columns; i++)
		{
			// and for every row
			for(int j = 0; j < rows; j++)
			{
				// make a node at the next position
				GameObject n = Instantiate(node, nextPos, transform.localRotation) as GameObject;
				// and rename it to its grid position [x, y] - [col, row]
				n.name = "[" + i + "][" + j + "]";
                n.transform.parent = transform;
				// assign the current key to the current node
				key = new Vector2(i, j);

				// add the key to the dictionary of nodes (vec2, gameobject)
				nodes.Add(key, n);


				Vector2 s1 = new Vector2(i - 1, j);		// the node to the left
				Vector2 s2 = new Vector2(i, j - 1);		// the node below
				Vector2 s3 = new Vector2(i - 1, j - 1);	// the node below and to the left
				Vector2 s4 = new Vector2(i - 1, j + 1);	// the node above and to the left

				/* c = current node [1, 1]
				 * s1 = [0, 1]
				 * s2 = [1, 0]
				 * s3 = [0, 0]
				 * s4 = [0, 2]
				 * *************
				 * s4 \  0    0
				 *     \
				 * s1 -- c    0
				 * 	   / |
				 * s3 /  s2   0
				 */

				// if any of the nodes exist connect it to this one with a spring
				if(nodes.ContainsKey(s1))
				{
					GameObject s = Instantiate(spring);
					s.GetComponent<Spring>().node_a = nodes[key];
					s.GetComponent<Spring>().node_b = nodes[s1];
					s.GetComponent<Spring>().Build();
					s.transform.parent = nodes[key].transform;
                    springs.Add(s);
				}
				if(nodes.ContainsKey(s2))
				{
					GameObject s = Instantiate(spring);
					s.GetComponent<Spring>().node_a = nodes[key];
					s.GetComponent<Spring>().node_b = nodes[s2];
					s.GetComponent<Spring>().Build();
                    s.transform.parent = nodes[key].transform;
                    springs.Add(s);
				}
				if(nodes.ContainsKey(s3))
				{
					GameObject s = Instantiate(spring);
					s.GetComponent<Spring>().node_a = nodes[key];
					s.GetComponent<Spring>().node_b = nodes[s3];
					s.GetComponent<Spring>().Build();
                    s.transform.parent = nodes[key].transform;
                    springs.Add(s);
				}
				if(nodes.ContainsKey(s4))
				{
					GameObject s = Instantiate(spring);
					s.GetComponent<Spring>().node_a = nodes[key];
					s.GetComponent<Spring>().node_b = nodes[s4];
					s.GetComponent<Spring>().Build();
                    s.transform.parent = nodes[key].transform;
                    springs.Add(s);
				}

				// locks the outer edges
				if(/*j == 0 ||*/ j == rows -1 )//|| i == 0 || i == columns - 1)
					nodes[key].GetComponent<Node>().isLocked = true;

				// increase the next position by an offset value
				nextPos += transform.up * offset;
			}
		
			// increase the next position by another offset (side-by-side)
			nextPos = transform.position;
			nextPos.x += offset * (i + 1);
			// reset the offet to the bottom most point
			nextPos.y = transform.position.y;
		}
		//GameObject bottom = Instantiate(spring);					
		//bottom.GetComponent<Spring>().node_a = nodes[Vector2.zero];
		//bottom.GetComponent<Spring>().node_b = nodes[new Vector2(columns-1, 0)];
		//bottom.GetComponent<Spring>().Build();

		// Makes the tirangles
		// for every column
		for(int i = 0; i < columns; i++)
		{
			// and for every row
			for(int j = 0; j < rows; j++)
			{
				if(i % 2 == 0)
				{
					List<GameObject> n = new List<GameObject>();

					Vector2 up = new Vector2(i, j+1);
					Vector2 right = new Vector2(i+1, j);

					if(nodes.ContainsKey(up) && 
					   nodes.ContainsKey(right))
					{
						n.Add(nodes[new Vector2(i, j)]);
						n.Add(nodes[up]);
						n.Add(nodes[right]);

						triangles.Add(n);
					}
				}
				else
				{
					List<GameObject> n = new List<GameObject>();
					
					Vector2 down = new Vector2(i, j-1);
					Vector2 left = new Vector2(i-1, j);
					
					if(nodes.ContainsKey(down) && 
					   nodes.ContainsKey(left))
					{
						n.Add(nodes[new Vector2(i, j)]);
						n.Add(nodes[down]);
						n.Add(nodes[left]);
						
						triangles.Add(n);
					}
				}
			}
		}

		// restart time
		Time.timeScale = 1;
	}

	public GameObject node;
	public GameObject spring;

    Slider strengthMod;
    Slider damperMod;
    Slider gravityMod;

	Vector3 windForce;

	public int rows;
	public int columns;
	public float offset;

	Dictionary<Vector2, GameObject> nodes = new Dictionary<Vector2, GameObject>();
    List<GameObject> springs = new List<GameObject>();

	List<List<GameObject>> triangles = new List<List<GameObject>>();
}