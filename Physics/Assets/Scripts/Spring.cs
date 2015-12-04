using UnityEngine;
using System.Collections;

public class Spring : MonoBehaviour
{
	public void Build ()
	{
		Ftotal = Vector3.zero;

		Fg = new Vector3(0, -1f, 0);

		Wind = Vector3.zero;

		if(node_a && node_b)
		{
			if(!node_a.GetComponent<Node>())
				node_a.AddComponent<Node>();

			if(!node_b.GetComponent<Node>())
				node_b.AddComponent<Node>();
			
			a = node_a.GetComponent<Node>();
			b = node_b.GetComponent<Node>();
		}
	}
	
	void FixedUpdate ()
	{
		if(Input.GetKey(KeyCode.Space))
		{
			Wind += Camera.main.transform.forward * Time.deltaTime;
		}
		else
		{
			Wind = Vector3.zero;
		}

		e = (b.transform.position - a.transform.position).normalized;

		CalculateSpringForce();
		CalculateSpringDamper();

		Ftotal = (Fs * e) + (Fd * e);

		CalculateNodeAcceleration(a);
		Ftotal = -Ftotal;				// Q-Dogs assistants
		CalculateNodeAcceleration(b);

		CalculateNodeVelocity(a);
		CalculateNodeVelocity(b);

		node_a.transform.position += a.vel;
		node_b.transform.position += b.vel;

		GetComponent<LineRenderer>().SetPosition(0, node_a.transform.position);
		GetComponent<LineRenderer>().SetPosition(1, node_b.transform.position);
		
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
		n.acl = (Ftotal + Fg + Wind) * Time.fixedDeltaTime;
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
	public Vector3 Wind;
	Vector3 Ftotal;
}
