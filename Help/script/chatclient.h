/**
 * @ingroup gr_AppNow
 */
class ChatClient
{
  public:
   bool IsVisible();
   void Show(bool show);
   bool IsActive();
   void Activate(bool Active);
   void SetTransformPos(Vector&in pos);
   void GetTransformPos(Vector&out pos);
   void GetType(string&out name);
   void GetData(string&out name);
   void SetData(string&in name);
   void Connect(string&in url, int port);
   void Disconnect();
   void SendMessage(string&in txt);
   void SendCommand(string&in txt);
   int SendFile(string&in cmd, string&in path);
};
