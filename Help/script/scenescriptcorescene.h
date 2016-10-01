/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreScene
{
  public:
   void LoadScene(string&in sceneName);
   void UnloadScene(string&in sceneName);
   bool IsSceneLoading(string&in sceneName);
   float GetLoadingProgress(string&in sceneName);
   bool ActivateInScene(string&in sceneName, string&in entityName, bool act);
};
