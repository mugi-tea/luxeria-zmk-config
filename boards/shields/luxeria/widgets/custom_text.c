/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <lvgl.h>
#include "custom_text.h"

int zmk_widget_custom_text_init(struct zmk_widget_custom_text *widget, lv_obj_t *parent) {
    widget->obj = lv_label_create(parent);
    lv_label_set_text(widget->obj, "Hello");
    return 0;
}

lv_obj_t *zmk_widget_custom_text_obj(struct zmk_widget_custom_text *widget) {
    return widget->obj;
}
