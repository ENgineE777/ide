/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreDataFile
{
  public:
   bool Start(string&in name, string&in start_block);
   bool Start(string&in name, string&in start_block, int file_type);
   bool StartFromRawData(string&in buffer, string&in start_block, int file_type);
   void Finish();
   bool EnterBlock(string&in name);
   void LeaveBlock();
   bool Read(string&in name, string& val);
   bool Read(string&in name, bool& val);
   bool Read(string&in name, float& val);
   bool Read(string&in name, int& val);
   bool Read(string&in name, int64& val);
   bool Read(string&in name, uint& val);
   bool Read(string&in name, uint64& val);
   bool Read(string&in name, Vector& val);
};
