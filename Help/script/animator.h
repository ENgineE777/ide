/**
 * @ingroup gr_Animator
 */
class Animator
{
  public:
   float TimeLenght;
   bool Looped;
   bool IsVisible();
   void Show(bool show);
   bool IsActive();
   void Activate(bool Active);
   void SetTransformPos(Vector&in pos);
   void GetTransformPos(Vector&out pos);
   void GetType(string&out name);
   void GetData(string&out name);
   void SetData(string&in name);
   void Reset();
};
