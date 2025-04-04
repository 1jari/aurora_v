#ifndef __VERSIS_SHARED_H__
#define __VERSIS_SHARED_H__

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef  __VERSIS_SHARED__
// @TODO: DLL EXPORTS
#else
#define VERSIS_API
#endif // __VERSIS_SHARED__


typedef unsigned char       u8_t;
typedef unsigned short      u16_t;
typedef unsigned long       u32_t;
typedef unsigned long long  u64_t;

typedef   signed char       i8_t;
typedef   signed short      i16_t;
typedef   signed long       i32_t;
typedef   signed long long  i64_t;


/* @TODO: implement fixed-point arithmetic */
typedef float   f32_t;
typedef double  f64_t;

typedef u32_t term_t;

#endif // __VERSIS_SHARED_H__
