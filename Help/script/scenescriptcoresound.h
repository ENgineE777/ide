/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreSound
{
  public:
   void PlaySound(string&in sndName);
   void SetMasterVolume(int volume);
   int  GetMasterVolume();
   void SetMusicVolume(int volume);
   int  GetMusicVolume();
   void SetSFXVolume(int volume);
   int  GetSFXVolume();
};
