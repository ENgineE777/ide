/**
 * @ingroup gr_Other
 */
class CacheFile
{
  public:
   bool scan_dir;
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
