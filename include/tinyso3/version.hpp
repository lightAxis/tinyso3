#pragma once

#define TINYSO3_VERSION "0.2.0"

#define TINYSO3_MAJOR_VERSION 0
#define TINYSO3_MINOR_VERSION 2
#define TINYSO3_PATCH_VERSION 0
#define TINYSO3_TWEAK_VERSION "fb3a12a"

#include "config.hpp"
#include "conventions.hpp"

#define TINYSO3_DEFAULT_FLOATING_POINT_TYPE float

#ifdef CONFIG_DEFAULT_FLOATING_POINT_PRECISION_32
#define TINYSO3_DEFAULT_FLOATING_POINT_TYPE float
#elif CONFIG_DEFAULT_FLOATING_POINT_PRECISION_64
#define TINYSO3_DEFAULT_FLOATING_POINT_TYPE double
#elif CONFIG_DEFAULT_FLOATING_POINT_PRECISION_128
#define TINYSO3_DEFAULT_FLOATING_POINT_TYPE long double
#endif

#define TINYSO3_DEFAULT_ROTATION_MATRIX_CONVENTION ACTIVE

#ifdef CONFIG_DEFAULT_ROTATION_MATRIX_CONVENTION_ACTIVE
#define TINYSO3_DEFAULT_ROTATION_MATRIX_CONVENTION ACTIVE
#elif CONFIG_DEFAULT_ROTATION_MATRIX_CONVENTION_PASSIVE
#define TINYSO3_DEFAULT_ROTATION_MATRIX_CONVENTION PASSIVE
#endif

#define TINYSO3_DEFAULT_EULER_ANGLE_CONVENTION INTRINSIC

#ifdef CONFIG_DEFAULT_EULER_ANGLE_CONVENTION_INTRINSIC
#define TINYSO3_DEFAULT_EULER_ANGLE_CONVENTION INTRINSIC
#elif CONFIG_DEFAULT_EULER_ANGLE_CONVENTION_EXTRINSIC
#define TINYSO3_DEFAULT_EULER_ANGLE_CONVENTION EXTRINSIC
#endif

#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE ZYX

#ifdef CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_XYZ
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE XYZ
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_XZY
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE XZY
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_YXZ
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE YXZ
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_YZX
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE YZX
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_ZXY
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE ZXY
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_ZYX
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE ZYX
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_XYX
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE XYX
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_XZX
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE XZX
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_YXY
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE YXY
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_YZY
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE YZY
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_ZXZ
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE ZXZ
#elif CONFIG_DEFAULT_EULER_ANGLE_SEQUENCE_ZYZ
#define TINYSO3_DEFAULT_EULER_ANGLE_SEQUENCE ZYZ
#endif

#define TINYSO3_DEFAULT_QUATERNION_CONVENTION HAMILTON

#ifdef CONFIG_DEFAULT_QUATERNION_CONVENTION_HAMILTON
#define TINYSO3_DEFAULT_QUATERNION_CONVENTION HAMILTON
#elif CONFIG_DEFAULT_QUATERNION_CONVENTION_JPL
#define TINYSO3_DEFAULT_QUATERNION_CONVENTION JPL
#endif
