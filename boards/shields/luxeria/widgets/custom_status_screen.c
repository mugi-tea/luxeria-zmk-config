/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <lvgl.h>
#include "custom_text.h"

static struct zmk_widget_custom_text custom_text_widget;

lv_obj_t *zmk_display_status_screen(void) {
    lv_obj_t *screen;

    screen = lv_obj_create(NULL);

    zmk_widget_custom_text_init(&custom_text_widget, screen);
    lv_obj_align(zmk_widget_custom_text_obj(&custom_text_widget), LV_ALIGN_CENTER, 0, 0);

    return screen;
}
