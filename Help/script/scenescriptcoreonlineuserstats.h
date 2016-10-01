/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreOnlineUserStats
{
  public:
   void TrackUserAge(int age);
   void TrackUserGender(string& gender);
   void AddEventParam(string&in name, string&in param);
   void TrackEvent(string&in name);
};
