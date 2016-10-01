/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreNetwork
{
  public:
   bool IsInternetConnected();
   void StartRequest(string&in method, string&in request, string&in post_params, string&in file_name, Callback1I1S @cb);
   void StartRequest(string&in method, string&in request, string&in post_params, string&in file_name, Callback1I2S @cb, string&in req_param);
};
