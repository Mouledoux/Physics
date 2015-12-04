using UnityEngine;
using System.Collections;

public class Spring : MonoBehaviour
{
	public void Build ()
	{
		Ftotal = Vector3.zero;

		Fg = new Vector3(0, -1f, 0);

		if(node_a && node_b)
		{
			if(!node_a.GetComponent<Node>())
				node_a.AddComponent<Node>();

			if(!node_b.GetComponent<Node>())
				node_b.AddComponent<Node>();
			
			a = node_a.GetComponent<Node>();
			b = node_b.GetComponent<Node>();
		}
		/***********************************
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
		*****************************************/
	}
	
	void FixedUpdate ()
	{

		e = (b.transform.position - a.transform.position).normalized;

		CalculateSpringForce();
		CalculateSpringDamper();

		Ftotal = (Fs * e) + (Fd * e);

		CalculateNodeAcceleration(a);
		Ftotal = -Ftotal;
		CalculateNodeAcceleration(b);

		CalculateNodeVelocity(a);
		CalculateNodeVelocity(b);

		node_a.transform.position += a.vel;
		node_b.transform.position += b.vel;

		Debug.DrawLine(node_a.transform.position, node_b.transform.position);
		transform.position = (a.transform.position + b.transform.position) / 2;
	}

	void CalculateSpringForce()
	{
		Fs = -springStrength * (springLength - Vector3.Magnitude(b.transform.position - a.transform.position));
	}

	void CalculateSpringDamper()
	{
		float aVel = Vector3.Dot(e, a.vel);
		float bVel = Vector3.Dot(e, b.vel);

		Fd = -springDamp * (aVel - bVel);
	}

	void CalculateNodeAcceleration(Node n)
	{
		n.acl = (Ftotal + Fg) * Time.fixedDeltaTime;
	}

	void CalculateNodeVelocity(Node n)
	{
		//if it's locked zero else add acceleration * dt
		n.vel += !n.isLocked ? n.acl * Time.fixedDeltaTime : Vector3.zero;
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
