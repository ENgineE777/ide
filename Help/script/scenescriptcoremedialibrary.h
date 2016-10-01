/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreMediaLibrary
{
  public:
   void StartScanning(CallbackWOP @cb);
   int GetFilesCount();
   void GetFileName(int i, string& name, bool prepareForLoading);
   void GetFileNameThumbnail(int i, string& name, bool prepareForLoading);
   int GetYearCount();
   int GetMonthCount(int year);
   int GetDayCount(int year, int month);
   int GetImageCount(int year, int month, int day);
   int GetIndexByYear(int year);
   int GetIndexByMonth(int year, int month);
   int GetIndexByDay(int year, int month, int day);
   bool GetDate(int index, int& day, int& month, int& year);
   bool GetTime(int index, int& hour, int& minute, int& second);
};
