﻿using UnityEngine;
using System.Collections.Generic;

public class Cloth : MonoBehaviour
{
	void Start()
	{
		MakeCloth();
	}

	void MakeCloth()
	{
		Time.timeScale = 0;
		Vector2 key;
		Vector3 nextPos = transform.position;
		for(int i = 0; i < columns; i++)
		{
			for(int j = 0; j < rows; j++)
			{
				GameObject n = Instantiate(node, nextPos, transform.localRotation) as GameObject;
				n.name = "[" + i + "][" + j + "]";

				key = new Vector2(i, j);

				nodes.Add(key, n);

				Vector2 s1 = new Vector2(i - 1, j);
				Vector2 s2 = new Vector2(i, j - 1);
				Vector2 s3 = new Vector2(i - 1, j - 1);
				Vector2 s4 = new Vector2(i - 1, j + 1);

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

				if(j==0 || j == rows -1 || i == 0 || i == columns - 1)
					nodes[key].GetComponent<Node>().isLocked = true;

				nextPos.z += 2f;
			}
			//nodes[key].GetComponent<Node>().isLocked = true;
			nextPos.x += 2f;
			nextPos.z = transform.position.z;
		}
		Time.timeScale = 1;
	}

	public GameObject node;
	public GameObject spring;

	public int rows;
	public int columns;

	Dictionary<Vector2, GameObject> nodes = new Dictionary<Vector2, GameObject>();
}