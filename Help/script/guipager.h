/**
 * @ingroup gr_GUI
 */
class GUIPager
{
  public:
   float x;
   float y;
   float width;
   float height;
   bool scaleChilds;
   bool Reference_Units;
   bool alignByParent;
   int horz_align;
   int vert_align;
   int weight;
   bool clip_childs;
   int text_align;
   int vrt_text_align;
   float alpha;
   float anchor_x;
   float anchor_y;
   bool AnchAbsUnits;
   float rotation;
   bool CellMove;
   bool AllowMouseCover;
   bool autoRecalc;
   int Type;
   bool Use_fade;
   bool Allow_Scroll;
   int Border;
   int Num_pages;
   float dot_offset;
   float dot_size;
   float dot_distance;
   float scroll_speed;
   bool scrollOnlyLocal;
   bool exclusiveMouse;
   bool speed_sensitivity;
   bool considerTouchType;
   bool IsVisible();
   void Show(bool show);
   bool IsActive();
   void Activate(bool Active);
   void SetTransformPos(Vector&in pos);
   void GetTransformPos(Vector&out pos);
   void GetType(string&out name);
   void GetData(string&out name);
   void SetData(string&in name);
   float GetScreenX();
   float GetScreenY();
   float GetScreenWidth();
   float GetScreenHeight();
   void SetParent(string&in name);
   void SetText(string&in name);
   void GetText(string&out name);
   float get_width();
   void set_width(float w);
   float get_height();
   void set_height(float h);
   float get_alpha();
   void set_alpha(float set_alpha);
   float get_x();
   void set_x(float set_x);
   float get_y();
   void set_y(float set_y);
   void SetFocused(bool set_focused);
   bool IsFocused();
   void RecalcPos();
   float GetTextWidth(string&in txt);
   float GetTextHeight(string&in txt);
   void SetColor(float r, float g, float b);
   void SetSkin(string&in txt);
   float GetPosition();
   void  SetPosition(float set, bool instance);
   void ScrollTo(int target_page);
   void SetCurPageIndex(int index);
   int GetCurPage();
   bool get_Allow_Scroll();
   void set_Allow_Scroll(bool set_Allow_Scroll);
};