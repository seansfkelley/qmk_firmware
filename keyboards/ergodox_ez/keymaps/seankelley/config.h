/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef DEBOUNCE
#define DEBOUNCE 40

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"DARGZ/aE3Ov"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT

// constant mode mouse movement
#define MK_3_SPEED
// contant mode: momentary, not tap-to-select
#define MK_MOMENTARY_ACCEL
// eww, default acceleration
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0

