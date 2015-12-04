using UnityEngine;
using System.Collections;

public class CameraMove : MonoBehaviour
{	
	void Awake()
	{
		originPos = transform.position;
		originRot = transform.localEulerAngles;
		originScl = transform.localScale;
	}

	void Update ()
	{
		float Th = 0;
		float Tv = 0;

		float Rx = 0;
		float Ry = 0;

		if(Input.GetMouseButton(0))
		{
			Th = speed * Input.GetAxis("Mouse X") * Time.deltaTime;
			Tv = speed * Input.GetAxis("Mouse Y") * Time.deltaTime;
		}

		if(Input.GetMouseButton(1))
		{
			Rx = speed * 0.1f * Input.GetAxis("Mouse Y") * Time.deltaTime;
			Ry = speed * 0.1f * Input.GetAxis("Mouse X") * Time.deltaTime;
		}

		if(Input.GetAxis("Mouse ScrollWheel") > 0)
			transform.position += transform.forward * speed * Time.deltaTime;
		if(Input.GetAxis("Mouse ScrollWheel") < 0)
			transform.position -= transform.forward * speed * Time.deltaTime;

		transform.Translate(-Th, -Tv, 0);
		transform.RotateAround(transform.position, transform.right, -Rx);
		transform.RotateAround(transform.position, Vector3.up, Ry);

		if(Input.GetKey(resetKey))
		{
			transform.position = originPos;
			transform.localEulerAngles = originRot;
			transform.localScale = originScl;
		}
	}

	public float speed;
	public KeyCode resetKey;

	Vector3 originPos;
	Vector3 originRot;
	Vector3 originScl;
}
