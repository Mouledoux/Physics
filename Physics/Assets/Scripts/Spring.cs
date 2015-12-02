using UnityEngine;
using System.Collections;

public class Spring : MonoBehaviour
{
	void Start ()
	{
		
	}
	
	void Update ()
	{
		Vector3 vel = Vector3.zero;

		vel += new Vector3(0, -9.81f, 0);

		if(anchor_go == null)
			anchor = transform.position;
		else
			anchor = anchor_go.transform.position;



		float dist = Vector3.Distance(transform.position, anchor);
		vel += (anchor - transform.position) * dist * spring;

		transform.position += vel * Time.deltaTime;
	}
	
	public float spring;
	public Vector3 anchor;
	public GameObject anchor_go;
}
