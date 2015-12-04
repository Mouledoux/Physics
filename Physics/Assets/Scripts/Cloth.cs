using UnityEngine;
using System.Collections.Generic;

public class Cloth : MonoBehaviour
{
	void Start()
	{
		MakeCloth();
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
		Vector3 nextPos = transform.position;


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
				}
				if(nodes.ContainsKey(s2))
				{
					GameObject s = Instantiate(spring);
					s.GetComponent<Spring>().node_a = nodes[key];
					s.GetComponent<Spring>().node_b = nodes[s2];
					s.GetComponent<Spring>().Build();
					s.transform.parent = nodes[key].transform;
				}
				if(nodes.ContainsKey(s3))
				{
					GameObject s = Instantiate(spring);
					s.GetComponent<Spring>().node_a = nodes[key];
					s.GetComponent<Spring>().node_b = nodes[s3];
					s.GetComponent<Spring>().Build();
					s.transform.parent = nodes[key].transform;
				}
				if(nodes.ContainsKey(s4))
				{
					GameObject s = Instantiate(spring);
					s.GetComponent<Spring>().node_a = nodes[key];
					s.GetComponent<Spring>().node_b = nodes[s4];
					s.GetComponent<Spring>().Build();
					s.transform.parent = nodes[key].transform;
				}

				// locks the outer edges
				if(j == 0 || j == rows -1)// || i == 0 || i == columns - 1)
					nodes[key].GetComponent<Node>().isLocked = true;

				// increase the next position by an offset value (up, or over) - z or y
				nextPos.y += offset;

				// once the column is complete go to the next one
			}
		
			//nodes[key].GetComponent<Node>().isLocked = true;
		
			// increase the next position by another offset (side-by-side)
			nextPos.x += offset;
			// reset the offet to the bottom most point
			nextPos.y = transform.position.y;
		}

		// restart time
		Time.timeScale = 1;
	}

	public GameObject node;
	public GameObject spring;

	public int rows;
	public int columns;
	public float offset;

	Dictionary<Vector2, GameObject> nodes = new Dictionary<Vector2, GameObject>();
}