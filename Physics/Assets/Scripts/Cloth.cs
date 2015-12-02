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
				go.row = i;
				go.col = j;

				go.self.name = "[" + i + "][" + j + "]";
				go.self.transform.position = nextPos;

				nextPos.y += 1.5f;

				temp.Add(go);
			}
			m_nodes.Add(temp);
			nextPos.x += 1.5f;
			nextPos.y = 0;
		}

		foreach(List<m_Node> cols in m_nodes)
		{
			foreach(m_Node n in cols)
			{
				if(n.col < m_nodes.Capacity)
				{
					if(m_nodes[n.col + 1][n.row].self)
						n.links.Add(m_nodes[n.col + 1][n.row].self);
					if(m_nodes[n.col][n.row + 1].self)
						n.links.Add(m_nodes[n.col][n.row + 1].self);
					if(m_nodes[n.col + 1][n.row + 1].self)
						n.links.Add(m_nodes[n.col + 1][n.row + 1].self);
				}
				
			}
		}
	}

	void Update()
	{
		foreach(List<m_Node> cols in m_nodes)
		{
			foreach(m_Node n in cols)
			{
				n.Spring(spring);
			}
		}
	}

	struct m_Node
	{
		public void Spring(float power)
		{
			Vector3 vel = Vector3.zero;
			vel += new Vector3(0, -9.81f, 0);
			foreach(GameObject other in links)
			{
				float dist = Vector3.Distance(self.transform.position, other.transform.position);
				vel += (other.transform.position - self.transform.position) * dist * power;
				
				self.transform.position += vel * Time.deltaTime;
			}
		}
		public GameObject self;
		public int row, col;
		public List<GameObject> links;
	}

	public GameObject node;

	public float spring;

	public int rows;
	public int columns;

	List<List<m_Node>> m_nodes = new List<List<m_Node>>();
}