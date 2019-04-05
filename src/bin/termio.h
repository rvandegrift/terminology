#ifndef _TERMIO_H__
#define _TERMIO_H__ 1

#include "config.h"
#include "main.h"
#include "col.h"
#include "termpty.h"
#if !defined(ENABLE_FUZZING) && !defined(ENABLE_TESTS)
#include "win.h"
#endif
#include "termiointernals.h"

Evas_Object *termio_add(Evas_Object *parent, Config *config, const char *cmd,
                        Eina_Bool login_shell, const char *cd, int w, int h,
                        Term *term, const char *title);
Termio *termio_get_from_obj(Evas_Object *obj);
void         termio_win_set(Evas_Object *obj, Evas_Object *win);
void         termio_theme_set(Evas_Object *obj, Evas_Object *theme);
Eina_Bool    termio_selection_exists(const Evas_Object *obj);
void termio_take_selection_text(Termio *sd, Elm_Sel_Type type, const char *text);
void termio_scroll_top_backlog(Evas_Object *obj);
void termio_scroll_delta(Evas_Object *obj, int delta, int by_page);
void termio_scroll_set(Evas_Object *obj, int scroll);
void termio_content_change(Evas_Object *obj, Evas_Coord x, Evas_Coord y, int n);

void
termio_handle_right_click(Evas_Event_Mouse_Down *ev, Termio *sd,
                          int cx, int cy);
void         termio_config_update(Evas_Object *obj);
void         termio_font_update(Evas_Object *obj);
Config      *termio_config_get(const Evas_Object *obj);
Eina_Bool    termio_take_selection(Evas_Object *obj, Elm_Sel_Type);
void         termio_paste_selection(Evas_Object *obj, Elm_Sel_Type);
const char  *termio_link_get(const Evas_Object *obj,
                             Eina_Bool *from_escape_code);
void         termio_mouseover_suspend_pushpop(Evas_Object *obj, int dir);
void         termio_event_feed_mouse_in(Evas_Object *obj);
void         termio_size_get(const Evas_Object *obj, int *w, int *h);
int          termio_scroll_get(const Evas_Object *obj);
void         termio_font_size_set(Evas_Object *obj, int size);
void         termio_grid_size_set(Evas_Object *obj, int w, int h);
pid_t        termio_pid_get(const Evas_Object *obj);
Eina_Bool    termio_cwd_get(const Evas_Object *obj, char *buf, size_t size);
Evas_Object *termio_textgrid_get(const Evas_Object *obj);
Evas_Object *termio_win_get(const Evas_Object *obj);
const char  *termio_title_get(const Evas_Object *obj);
const char  *termio_user_title_get(const Evas_Object *obj);
void         termio_user_title_set(Evas_Object *obj, const char *title);
const char  *termio_icon_name_get(const Evas_Object *obj);
void         termio_media_mute_set(Evas_Object *obj, Eina_Bool mute);
void         termio_media_visualize_set(Evas_Object *obj, Eina_Bool visualize);
void         termio_config_set(Evas_Object *obj, Config *config);
void         termio_set_cursor_shape(Evas_Object *obj, Cursor_Shape shape);
Config      *termio_config_get(const Evas_Object *obj);
Eina_Bool    termio_file_send_ok(const Evas_Object *obj, const char *file);
void         termio_file_send_cancel(const Evas_Object *obj);
double       termio_file_send_progress_get(const Evas_Object *obj);

void
termio_imf_cursor_set(Evas_Object *obj, Ecore_IMF_Context *imf);

Termpty *termio_pty_get(const Evas_Object *obj);
Evas_Object * termio_miniview_get(const Evas_Object *obj);
Term* termio_term_get(const Evas_Object *obj);

void termio_key_down(Evas_Object *termio, const Evas_Event_Key_Down *ev,
                     Eina_Bool action_handled);
void termio_focus_in(Evas_Object *termio);
void termio_focus_out(Evas_Object *termio);
void termio_smart_update_queue(Termio *sd);
void termio_object_geometry_get(Termio *sd,
                                Evas_Coord *x, Evas_Coord *y,
                                Evas_Coord *w, Evas_Coord *h);
void
termio_sel_set(Termio *sd, Eina_Bool enable);
void
termio_smart_cb_mouse_move_job(void *data);

void
termio_block_activate(Evas_Object *obj, Termblock *blk);
const char *
term_preedit_str_get(Term *term);
#endif
