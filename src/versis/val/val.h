#ifndef __VERSIS_VAL_H__
#define __VERSIS_VAL_H__

#include "../versis_shared.h"


/* Classes */
typedef enum
{
  VAL_P_INT,
  VAL_N_INT,
  VAL_FLOAT,
} val_e;

/* Definition */
typedef struct
{
  val_e    t;  /* type */
  union
  {
    term_t i;  /* Integers and Naturals*/
    f32_t  f;  /* Floating point */
  };
} val_t;

/* For Integers */
VERSIS_API
static val_t
val_i(i64_t x)
{
  val_t y;

  /* It is Positive or negative? */
  
  y.t = (x >= 0) ? VAL_P_INT : VAL_N_INT;

  printf("%d \n", y.t);

  /* Convert to type */
  y.i = abs(x);
  return y;
};

VERSIS_API
inline static i64_t
val_to_i(val_t x)
{
  return (x.t == VAL_P_INT) ?
    (i64_t)  +x.i :
    (i64_t) 0-x.i;
}

/* Arithmetics */
VERSIS_API
val_t
val_add(val_t a,
        val_t b);
VERSIS_API
val_t
val_sub(val_t a,
        val_t b);

#endif // __VERSIS_VAL_H__
