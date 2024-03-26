# This file intentionally left blank
ENCODER_ENABLE = yes

# RP2040-specific options
ALLOW_WARNINGS = yes
PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.

POINTING_DEVICE_ENABLE = yes # Enable trackball
POINTING_DEVICE_DRIVER = pmw3360

SERIAL_DRIVER = vendor
WS2812_DRIVER = vendor