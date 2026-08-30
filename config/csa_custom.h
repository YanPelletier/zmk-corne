/*
 * Custom CSA/BÉPO overrides.
 * Keep this file separate from the generated Canadian CSA header.
 */

#pragma once

#include "keys_fr_csa.h"

#define CSA_EQ          FR_EQUAL
#define CSA_DEG         FR_DEG
#define CSA_NEQ         (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define CSA_NOT_EQUAL   (CSA_NEQ)
#define CSA_DOLLAR      FR_DOLLAR
#define CSA_HASH        (LS(FR_N3))
#define CSA_DASH        (RA(FR_MINUS))
#define CSA_PRIME       (RA(FR_N1))
#define CSA_PARA        (RA(FR_EQUAL))
#define CSA_PERCENT     FR_PERCENT
#define CSA_GRAVE       FR_GRAVE
#define CSA_PERMIL      (RA(FR_N5))
#define CSA_DPRIME      (RA(FR_N2))
