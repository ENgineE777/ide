/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreMobile
{
  public:
   void SetPushListener(Callback1S @cb);
   void SetOnResumeCallback(CallbackWOP @cb);
   void SetOnPauseCallback(CallbackWOP @cb);
   bool IsReadContactsAllowed();
   void RequestAccessToContacts(Callback1I @cb);
   void StartReadContacts(Callback1I @cb);
   void StartReadContactsAvatars(Callback1I @cb);
   int GetContactsCount();
   void GetContactData(int i, string& name, string& texture, string& numbers);
   void SendSms(string&in number, string&in text,  Callback1I @cb);
   void GetSimOperatorName(string& name);
   void StartSelectImage(int type, Callback1I1S @cb);
   bool IsAllowCall();
   void CallNumber(string&in number);
   void SendMail(string&in address, string&in subject, string&in body);
   void StartShareText(string&in text, string&in extra_data, Callback1S@ cb);
   void StartShareImage(string&in image, Callback1S@ cb);
   void AddEventToCalendar(int day, int month, int year, int hour, int minute, int second, string&in name, string&in desc, string&in location);
   void SetPushServerURL(string&in number);
   void StartRegisterInPushService();
   float GetTittleBarHeight();
   void ShowMap(bool show);
   void SetMapPosition(float x, float y, float w, float h);
   void AddObjectToMap(float x, float y, string&in text);
   void DeleteAllMapObjects();
   void ShowNativeMap(float x, float y, string&in text);
   void ShowPopup(string&in title, string&in text, string&in btn_text, CallbackWOP @cb);
   void ShowPopup(string&in title, string&in text, string&in btn_ok_text, CallbackWOP @cb_ok, string&in btn_cancel_text, CallbackWOP @cb_cancel);
   float GetBatteryLevel();
   int   GetBatteryStatus();
   void  GetInstallReferer(string& referer);
   void StartScanBarcode(Callback1S@ cb);
   void GetCameraTextureSize(int& width, int& height);
   void EnableTrackGPS(bool enable, Callback1I2F@ cb);
};
