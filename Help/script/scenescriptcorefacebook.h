/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreFacebook
{
  public:
   void SignIn(Callback1I1S @cb);
   void AddRequestPermistion(string&in name);
   void StartRequestPermistions(Callback1I1S @cb);
   bool GetSignInStatus();
   void SignOut(CallbackWOP @cb);
   void StartRequest(string&in method, string&in url, string&in params, string&in post_params, Callback1I1S @cb);
   void StartRequest(string&in method, string&in url, string&in params, string&in post_params, Callback1I2S @cb, string&in req_param);
   void UploadFile(string& url, string& file_name, string& param_name, string& message, Callback1I1S @cb);
   void SetGuestAccessTokenURL(string& url);
   void SetApiURL(string& url);
};
