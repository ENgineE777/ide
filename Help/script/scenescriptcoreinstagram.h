/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreInstagram
{
  public:
   void SignIn(CallbackWOP @cb);
   void SignOut(CallbackWOP @cb);
   void GetAccessToken(string& token);
};
