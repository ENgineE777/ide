/**
 * @ingroup gr_NGUI
 */
class NGUITextDrawer
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
   bool UseEntity;
   float fontScale;
   bool IsVisible();
   void Show(bool show);
   bool IsActive();
   void Activate(bool Active);
   void SetTransformPos(Vector&in pos);
   void GetTransformPos(Vector&out pos);
   void GetType(string&out name);
   void GetData(string&out name);
   void SetData(string&in name);
   float GetAbsoluteX();
   float GetAbsoluteY();
   void SetText(string&in name);
   void GetText(string& name);
   float get_x();
   void set_x(float set_x);
   float get_y();
   void set_y(float set_y);
   float get_width();
   void set_width(float w);
   float get_height();
   void set_height(float h);
   float get_alpha();
   void set_alpha(float set_alpha);
   float get_rot_x();
   void set_rot_x(float set_rot_x);
   float get_rot_y();
   void set_rot_y(float set_rot_y);
   float get_rot_z();
   void set_rot_z(float set_rot_z);
   void SetFocused(bool set_focused);
   bool IsFocused();
   float GetCurTextWidth();
   float GetCurTextHeight();
   int GetCurTextLinesCount();
   float GetTextWidth(string&in txt);
   float GetTextHeight(string&in txt);
   int GetTextLinesCount(string&in txt);
   void SetColor(float r, float g, float b);
   void SetColor(string&in txt);
   void GetColor(float& r, float& g, float& b);
   void GetName(string& nm);
   int GetIndexInParentChilds();
   void SetIndexInParentChilds(int index);
   NGUIWidget@ GetChild(string&in name);
   NGUIWidget@ GetChild(int index);
   int GetChildCount();
   NGUIWidget@ opImplCast();
   NGUITextDrawer@ opCast();
   void Draw(float x, float y, string&in txt_text, float alpha);
   void Draw(float x, float y, float w, float h, string&in txt_text, float alpha);
   void Draw(float x, float y, float w, float h, float font_scale, string&in txt_text, float alpha);
   void SetFontColor(float r, float g, float b);
   void SetFontShadowColor(float r, float g, float b);
   void SetFontSize(int size);
};