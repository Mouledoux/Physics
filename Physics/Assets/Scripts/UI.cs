using UnityEngine;
using System.Collections;

public class UI : MonoBehaviour
{
    public void Exit()
    {
        Application.Quit();
    }

	public void Restart()
	{
		Application.LoadLevel(Application.loadedLevel);
	} 
}
