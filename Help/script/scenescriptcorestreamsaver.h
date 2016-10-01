/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreStreamSaver
{
  public:
   bool Start(string&in name, int file_type);
   void Finish();
   void EnterBlock(string&in name);
   void LeaveBlock(string&in name);
   void Write(string&in name, string&in val);
   void Write(string&in name, bool&in val);
   void Write(string&in name, float&in val);
   void Write(string&in name, int&in val);
   void Write(string&in name, int64&in val);
   void Write(string&in name, Vector&in val);
};
