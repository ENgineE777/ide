/**
 * @ingroup gr_scriptcore
 */
class SceneScriptCore
{
  public:
   void Exit();
   float GetDeltaTime();
   void Trace(string&in text);
   void TraceTo(string&in log, string&in text);
   int GetCurrentPlatform();
   void GetDeviceVendor(string& device_vendor);
   void GetDeviceName(string& device_name);
   void GetDeviceID(string& device_id);
   void GetLocale(string& text);
   SceneScriptCoreControls Controls;
   SceneScriptCoreScene Scene;
   SceneScriptCoreRender Render;
   SceneScriptCoreUserStats UserStats;
   SceneScriptCoreUtils Utils;
   SceneScriptCoreDataFile DataFile;
   SceneScriptCoreStreamSaver StreamSaver;
   SceneScriptCoreMediaLibrary MediaLibrary;
   SceneScriptCoreOnlineUserStats Online;
   SceneScriptCoreFacebook Facebook;
   SceneScriptCoreVK VK;
   SceneScriptCoreInstagram Instagram;
   SceneScriptCoreNetwork Network;
   SceneScriptCoreMobile Mobile;
};
