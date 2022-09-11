using UnityEditor;
using System.Collections;

public class ATEditorCoroutines
{
    readonly IEnumerator mRoutine;

    public static ATEditorCoroutines StartEditorCoroutine( IEnumerator routine)
    {
        ATEditorCoroutines coroutine = new ATEditorCoroutines(routine);
        coroutine.start();
        return coroutine;
    }

    ATEditorCoroutines(IEnumerator routine)
    {
        mRoutine = routine;
    }

    void start()
    {
        EditorApplication.update += update;
    }

    void update()
    {
        if(!mRoutine.MoveNext())
        {
            StopEditorCoroutine();
        }
    }

    public void StopEditorCoroutine()
    {
        EditorApplication.update -= update;
    }
}
