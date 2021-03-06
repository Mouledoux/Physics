﻿using UnityEngine;
using System.Collections;

public class Spring : MonoBehaviour
{
	public void Build ()
	{
		Ftotal = Vector3.zero;

		Fg = new Vector3(0, -1f, 0);

        strMod = dmpMod = grvMod = 1.0f;

		if(node_a && node_b)
		{
			if(!node_a.GetComponent<Node>())
				node_a.AddComponent<Node>();

			if(!node_b.GetComponent<Node>())
				node_b.AddComponent<Node>();
			
			a = node_a.GetComponent<Node>();
			b = node_b.GetComponent<Node>();

			springLength = Vector3.Distance(a.transform.position, b.transform.position);
		}
	}
	
	void FixedUpdate ()
	{
        Fg = new Vector3(0, -1f, 0) * grvMod;

		/////////////////////////////////////////////////////////////

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

		if(Vector3.Distance(a.transform.position, b.transform.position) > springLength * 3)
		{
			Destroy(gameObject);
		}

		a.acl = Vector3.zero;
		b.acl = Vector3.zero;
	}

	void CalculateSpringForce()
	{
		Fs = -(springStrength * strMod) * (springLength - Vector3.Magnitude(b.transform.position - a.transform.position));
	}

	void CalculateSpringDamper()
	{
		float aVel = Vector3.Dot(e, a.vel);
		float bVel = Vector3.Dot(e, b.vel);

		Fd = -(springDamp * dmpMod) * (aVel - bVel);
	}

	void CalculateNodeAcceleration(Node n)
	{
		n.acl += (Ftotal + Fg) * Time.fixedDeltaTime;
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

    public float strMod;
    public float dmpMod;
    public float grvMod;
}
