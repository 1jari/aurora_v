#include "./val.h"


/* Arithmetics */
VERSIS_API
val_t
val_add(val_t a,
        val_t b)
{
  i64_t x = val_to_i(a);
  i64_t y = val_to_i(b);
  printf("%i %i \n", x, y);
  return val_i((x + y));
}


VERSIS_API
val_t
val_sub(val_t a,
        val_t b)
{
  i64_t x =
    (a.t == VAL_P_INT) ? +a.i : -a.i;
  i64_t y =
    (b.t == VAL_P_INT) ? +b.i : -b.i;

  return val_i(x - y);
}
