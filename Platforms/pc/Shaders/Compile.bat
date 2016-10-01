
fxc /E VS /T vs_4_0 /Fo nfont_vs.bvs nfont.shader
fxc /E PS /T ps_4_0 /Fo nfont_ps.bps nfont.shader

fxc /E VS /T vs_4_0 /Fo ui_vs.bvs ui.shader
fxc /E PS /T ps_4_0 /Fo ui_ps.bps ui.shader

fxc /E VS /T vs_4_0 /Fo ngui_vs.bvs ngui.shader
fxc /E PS /T ps_4_0 /Fo ngui_ps.bps ngui.shader

fxc /E VS2 /T vs_4_0 /Fo ngui_mask_vs.bvs ngui.shader
fxc /E PS2 /T ps_4_0 /Fo ngui_mask_ps.bps ngui.shader

fxc /E VS /T vs_4_0 /Fo line_vs.bvs line.shader
fxc /E VS2D /T vs_4_0 /Fo line2d_vs.bvs line.shader
fxc /E PS /T ps_4_0 /Fo line_ps.bps line.shader

pause
