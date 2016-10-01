/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreUserStats
{
  public:
   void SetFloat(string&in id, float def_value, float value, bool add);
   void SetInt(string&in id, int def_value, int value, bool add);
   void SetVector(string&in id, Vector def_value, Vector value);
   void SetString(string&in id, string&in def_value, string&in value);
   float GetFloat(string&in id, float def_value);
   int GetInt(string&in id, int def_value);
   Vector GetVector(string&in id, Vector def_value);
   void GetString(string&in id, string&in def_value, string& value);
   void SetFloat(int hash1, int hash2, float def_value, float value, bool add);
   void SetInt(int hash1, int hash2, int def_value, int value, bool add);
   void SetVector(int hash1, int hash2, Vector def_value, Vector value);
   void SetString(int hash1, int hash2, string&in def_value, string&in value);
   float GetFloat(int hash1, int hash2, float def_value);
   int GetInt(int hash1, int hash2, int def_value);
   Vector GetVector(int hash1, int hash2, Vector def_value);
   void GetString(int hash1, int hash2, string&in def_value, string& value);
   void GetHashes(string&in id, int& hash1, int& hash2);
   bool Load();
   void Save();
};
