using UnityEngine;
using System.Collections;

public class Spring : MonoBehaviour
{
	void Awake ()
	{
		Ftotal = Vector3.zero;

		Fg = new Vector3(0, -9.81f, 0);

		if(node_a && node_b)
		{
			if(!node_a.GetComponent<Node>())
				node_a.AddComponent<Node>();

			if(!node_b.GetComponent<Node>())
				node_b.AddComponent<Node>();
			
			a = node_a.GetComponent<Node>();
			b = node_b.GetComponent<Node>();
		}

		else if(node_a && !node_b)
		{
			node_b = gameObject;

			if(!node_a.GetComponent<Node>())
				node_a.AddComponent<Node>();

			if(!node_b.GetComponent<Node>())
				node_b.AddComponent<Node>();
			
			a = node_a.GetComponent<Node>();
			b = node_b.GetComponent<Node>();
		}

		else if(!node_a && node_b)
		{
			node_a = gameObject;
			
			if(!node_a.GetComponent<Node>())
				node_a.AddComponent<Node>();

			if(!node_b.GetComponent<Node>())
				node_b.AddComponent<Node>();

			a = node_a.GetComponent<Node>();
			b = node_b.GetComponent<Node>();
		}

		else
		{
			node_a = new GameObject();
			node_b = gameObject;

			node_a.AddComponent<Node>();

			if(!node_b.GetComponent<Node>())
				node_b.AddComponent<Node>();
			
			a = node_a.GetComponent<Node>();
			b = node_b.GetComponent<Node>();

			a.transform.position += b.transform.position;

			a.isLocked = true;
		}
	}
	
	void Update ()
	{
		e = (a.transform.position - b.transform.position).normalized;
		Ftotal = Fg;
		Ftotal += ((CalculateSpringForce() + CalculateSpringDamper()) * Vector3.Distance(a.transform.position, b.transform.position)) * e;

		CalculateNodeAcceleration(a);
		CalculateNodeAcceleration(b);

		CalculateNodeVelocity(a);
		CalculateNodeVelocity(b);

		node_a.transform.position += a.vel;
		node_b.transform.position += b.vel;

		Debug.DrawLine(node_a.transform.position, node_b.transform.position);
	}

	float CalculateSpringForce()
	{
		Fs = -springStrength * (springLength - Vector3.Distance(a.transform.position, b.transform.position));
		return Fs;
	}

	float CalculateSpringDamper()
	{
		Fd = -springDamp * (a.vel - b.vel).magnitude;
		return Fd;
	}

	void CalculateNodeAcceleration(Node n)
	{
		n.acl = (Ftotal);
	}

	void CalculateNodeVelocity(Node n)
	{
		//if it's locked zero else add acceleration * dt
		n.vel += !n.isLocked ? n.acl * Time.deltaTime : Vector3.zero;
	}

	public float springStrength;
	public float springLength;
	public float springDamp;
	public GameObject node_a;
	public GameObject node_b;
	Node a, b;

	
	float Fs;
	float Fd;

	Vector3 e;
	Vector3 Fg;
	Vector3 Ftotal;
}
