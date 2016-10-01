/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreControls
{
  public:
   bool IsKey(int key, int act);
   float GetControlValue(int key);
   bool CheckTouch(int index, int act);
   float GetTouchX(int index);
   float GetTouchY(int index);
   bool IsAnyKeyPressed();
   void HideSoftKeyboard();
   int  GetSoftKeyboardHeight();
   bool IsShowSoftKeyboard();
   float GetGyro(int index);
   void  SetGyro(int index, float val);
   bool  IsBackPressed();
};
