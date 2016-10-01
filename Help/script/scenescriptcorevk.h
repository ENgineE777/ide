/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreVK
{
  public:
   void SignIn(Callback1I1S @cb);
   int  GetSignInStatus();
   void SignOut(CallbackWOP @cb);
   void GetUserID(string& user_id);
   void StartRequest(string&in url, string&in params, string&in post_params, Callback1I1S @cb);
   void StartRequest(string&in url, string&in params, string&in post_params, Callback1I2S @cb, string& req_param);
   void UploadFile(string&in url, string&in file_name, Callback1I1S @cb);
   void SetApiURL(string& url);
};
