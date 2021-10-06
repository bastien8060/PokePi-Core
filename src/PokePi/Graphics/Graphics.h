#include "../../lvgl/lvgl.h"
#include "../../lv_demos/lv_demo.h"

extern void PokePi_GUI_init();
//Inits the first GUI screen upon startup of PokePi. 



static void ta_event_cb(lv_event_t * e);
static void exit_button_event_cb(lv_event_t * e);
static void scan_button_event_handler(lv_event_t * e);