using UnityEngine;
using System.Collections;

public class Node : MonoBehaviour
{
	public Vector3 acl;
	public Vector3 vel;
	public Vector3 frc;

	public bool isLocked;
	bool held;

	void Awake()
	{
		acl = vel = frc = Vector3.zero;
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

		if(Input.GetMouseButton(0) && Input.GetMouseButton(1))
		{
			if(Vector3.Distance(screenMid, transform.position) < 3)
			{
				held = true;
			}
		}
		else
		{
			held = false;
		}

		if(held)
		{
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
