/**
 * @ingroup gr_NGUI
 */
class NGUIButton
{
  public:
   float x;
   float y;
   float width;
   float height;
   float rot_x;
   float rot_y;
   float rot_z;
   bool scaleChilds;
   bool alignByParent;
   int horz_align;
   int vert_align;
   bool clip_childs;
   int text_align;
   int vrt_text_align;
   float alpha;
   float anchor_x;
   float anchor_y;
   bool AnchAbsUnits;
   bool CellMove;
   bool AllowMouseCover;
   bool TrigerAlwaysMUP;
   float Border;
   int EventType;
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
