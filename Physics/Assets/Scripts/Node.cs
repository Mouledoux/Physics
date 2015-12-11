using UnityEngine;
using System.Collections;

public class Node : MonoBehaviour
{
	public Vector3 acl;
	public Vector3 vel;
	public Vector3 frc;

	public bool isLocked;
	bool held;

    GameObject ground;

	void Awake()
	{
		acl = vel = frc = Vector3.zero;
        ground = FindObjectOfType<Ground>().gameObject;
	}

	void FixedUpdate()
	{
		Vector3 mouseSpace = Input.mousePosition - new Vector3(Screen.width / 2,
		                             Screen.height / 2,
		                             1).normalized;

		Vector3 screenMid = (Camera.main.transform.position +
		                     Camera.main.transform.forward *
		                     Vector3.Distance(transform.position,
		                 Camera.main.transform.position));

        if (transform.position.y - ground.transform.position.y < 15)
        {
            if (Vector3.Distance(transform.position, ground.transform.position) < ground.transform.localScale.x/2)
                vel.y = 0;
        }
    
        if (Vector3.Distance(screenMid, transform.position) < 10)
        {
            GetComponent<MeshRenderer>().enabled = true;
            if (Input.GetMouseButtonDown(0))
            {
                held = true;
            }
        }
        else if (!Input.GetMouseButton(0))
        {
            held = false;
            GetComponent<MeshRenderer>().enabled = false;
        }

		if(held)
		{
            GetComponent<MeshRenderer>().enabled = true;
            acl += (screenMid - transform.position);
			if(Input.GetKeyDown(KeyCode.L))
			{
				isLocked = !isLocked;
				if(isLocked)
				{
					acl = vel = frc = Vector3.zero;
				}
			}
		}
	}
}
