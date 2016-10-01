/**
 * @ingroup gr_Other
 */
class TemplateBuilder
{
  public:
   int p1_el1_type;
   int p1_el2_type;
   int p1_el3_type;
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
