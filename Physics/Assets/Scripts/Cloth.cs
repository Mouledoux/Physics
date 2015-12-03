using UnityEngine;
using System.Collections.Generic;

public class Cloth : MonoBehaviour
{
	void Start()
	{
		MakeCloth();
	}

	void MakeCloth()
	{
		Vector3 nextPos = Vector3.zero;
		for(int i = 0; i < columns; i++)
		{
			for(int j = 0; j < rows; j++)
			{
				GameObject go = Instantiate(node, nextPos, transform.localRotation) as GameObject;
				go.name = "[" + i + "][" + j + "]";

				nodes.Add(new Vector2(i, j), go);

				nextPos.y += 1.5f;
			}
			nextPos.x += 1.5f;
			nextPos.y = 0;
		}

		/* Make the springs/////////////////////////////////////////////////////////////
		foreach(List<m_Particle> row in m_nodes)
		{
			foreach(m_Particle p in row)
			{
				if(p.col < columns - 1 && p.row < rows - 1)
				{
					p.links.Add(m_nodes[p.col][p.row + 1].self);
					p.links.Add(m_nodes[p.col + 1][p.row].self);
					p.links.Add(m_nodes[p.col + 1][p.row + 1].self);
				}
			}
		}
		*///////////////////////////////////////////////////////////////////////////////
	}

	public GameObject node;

	public int rows;
	public int columns;

	Dictionary<Vector2, GameObject> nodes = new Dictionary<Vector2, GameObject>();
}