#ifndef LVGL_SUPPORT_H
#define LVGL_SUPPORT_H
#include <zephyr/kernel.h>
#define DISPLAY_NODE DT_CHOSEN(zephyr_display)

#define LCD_WIDTH  DT_PROP(DISPLAY_NODE, width)
#define LCD_HEIGHT DT_PROP(DISPLAY_NODE, height)
#endif
