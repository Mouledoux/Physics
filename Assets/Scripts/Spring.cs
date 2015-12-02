using UnityEngine;
using System.Collections;

public class Spring : MonoBehaviour
{
    void Start()
    {
        if(obj1 && obj2)
        {
            m_size = Vector3.Distance(obj1.transform.position, obj2.transform.position);
        }
    }


	void Update ()
    {
	    
	}

    public GameObject obj1;
    public GameObject obj2;

    public float springStrength;

    private float m_size;
}
