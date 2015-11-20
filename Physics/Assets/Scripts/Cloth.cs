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
		for(int i = 0; i < rows; i++)
		{
			List<m_Node> temp = new List<m_Node>();

			for(int j = 0; j < columns; j++)
			{
				m_Node go = new m_Node(); 
				go.self = Instantiate(node) as GameObject;

				go.self.name = "[" + i + "][" + j + "]";
				go.self.transform.position = nextPos;

				nextPos.y += 1.5f;

				temp.Add(go);
			}
			m_nodes.Add(temp);
			nextPos.x += 1.5f;
			nextPos.y = 0;
		}
	}

	struct m_Node
	{
		void Update()
		{
			foreach(GameObject other in links)
			{
				float dist = Vector3.Distance(self.transform.position,
				                              other.transform.position);

				if(dist > 2)
				{
					self.transform.position +=
						(other.transform.position - self.transform.position) * Time.deltaTime * dist;
				}
			}
		}
		public GameObject self;
		int row, col;
		List<GameObject> links;
	}

	public GameObject node;

	public int rows;
	public int columns;

	List<List<m_Node>> m_nodes = new List<List<m_Node>>();
}