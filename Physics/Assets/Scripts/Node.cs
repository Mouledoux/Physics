using UnityEngine;
using System.Collections;

public class Node : MonoBehaviour
{
	public Vector3 acl;
	public Vector3 vel;
	public Vector3 frc;

	void Awake()
	{
		acl = vel = frc = Vector3.zero;
	}
}
