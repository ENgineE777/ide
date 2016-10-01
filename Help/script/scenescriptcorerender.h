/**
 * @ingroup gr_scriptcore_parts
 */
class SceneScriptCoreRender
{
  public:
   float GetWidth();
   float GetHeight();
   float GetReferenceWidth();
   float GetReferenceHeight();
   float HorzRefToScreen(float sz);
   float VertRefToScreen(float sz);
   float HorzScreenToRef(float sz);
   float VertScreenToRef(float sz);
   void PrintText(float x, float y, string&in text);
   void DrawLine2D(Vector2& p1, Vector& color1, Vector2& p2, Vector& color2);
   int GetScreenDPI();
   void MakeScreenshot(string&in out_image);
};
