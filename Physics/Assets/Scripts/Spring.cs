using UnityEngine;
using System.Collections;

public class Spring : MonoBehaviour
{
	void Awake ()
	{
		Fg = Fs = Vector3.zero;
	}
	
	void Update ()
	{
		/*
		 * 
		 * 
		 */

		//node_a.transform.position += ()
		//node_b.transform.position += ()
	}
	
	public float springStrength;
	public GameObject node_a;
	public GameObject node_b;

	Vector3 Fg;// = new Vector3(0, -9.81f, 0);
	Vector3 Fs;
	Vector3 Fd;
	Vector3 Ftotal;
}
