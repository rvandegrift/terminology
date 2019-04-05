#ifndef _TYTEST_H__
#define _TYTEST_H__ 1

#if defined(ENABLE_TESTS)
#define evas_object_textgrid_palette_get test_textgrid_palette_get
void
test_textgrid_palette_get(const Evas_Object *obj,
                          Evas_Textgrid_Palette pal,
                          int idx,
                          int *r,
                          int *g,
                          int *b,
                          int *a);

#define evas_object_textgrid_cellrow_get test_textgrid_cellrow_get
Evas_Textgrid_Cell *
test_textgrid_cellrow_get(Evas_Object *obj, int y);
void
tytest_termio_resize(int w, int h);

void tytest_init(void);
void tytest_shutdown(void);

#endif
#endif
