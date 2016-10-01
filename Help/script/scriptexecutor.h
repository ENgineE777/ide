/**
 * @ingroup gr_Logic
 */
class ScriptExecutor
{
  public:
   bool ActOnce;
   float Delay;
   int Priority;
   bool IsVisible();
   void Show(bool show);
   bool IsActive();
   void Activate(bool Active);
   void SetTransformPos(Vector&in pos);
   void GetTransformPos(Vector&out pos);
   void GetType(string&out name);
   void GetData(string&out name);
   void SetData(string&in name);
};
