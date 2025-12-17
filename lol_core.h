#ifndef _lol_core_h_
#define _lol_core_h_

/* C headers */
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

typedef float           f32;        /* 32-bit float */
typedef double          f64;        /* 64-bit float */

typedef int8_t          s8;         /* 8-bit signed integer */
typedef uint8_t         u8;         /* 8-bit unsigned integer */
typedef int16_t         s16;        /* 16-bit signed integer */
typedef uint16_t        u16;        /* 16-bit unsigned integer */
typedef int32_t         s32;        /* 32-bit signed integer */
typedef uint32_t        u32;        /* 32-bit unsigned integer */
typedef int64_t         s64;        /* 64-bit signed integer */
typedef uint64_t        u64;        /* 64-bit unsigned integer */

typedef size_t          usize;      /* platform-dependent unsigned integer */
typedef ptrdiff_t       isize;      /* platform-dependent signed integer */

#endif /* _lol_core_h_ */