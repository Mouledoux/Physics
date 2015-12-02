using UnityEngine;
using System.Collections;

public class Test : MonoBehaviour
{
	void Start ()
    {
	
	}
	
	void Update ()
    {
        float dist = Vector3.Distance(transform.position, anchor);
        transform.position += (anchor - transform.position) * Time.deltaTime * dist * spring;
        GetComponent<Rigidbody>().velocity = Vector3.zero;
	}

    public float spring;
    public Vector3 anchor;
}
