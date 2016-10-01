/**
 * @ingroup gr_Online
 */
class ItemBuyer
{
  public:
   bool IsVisible();
   void Show(bool show);
   bool IsActive();
   void Activate(bool Active);
   void SetTransformPos(Vector&in pos);
   void GetTransformPos(Vector&out pos);
   void GetType(string&out name);
   void GetData(string&out name);
   void SetData(string&in name);
   void StartPurchase();
   void SetIosId(string&in name);
   void SetDroidId(string&in name);
};
