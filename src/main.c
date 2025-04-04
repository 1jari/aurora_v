#include <stdio.h>
#include "./versis/versis.h"

int
main(int   argc,
     char *argv[])
{
  val_t x = val_sub(val_i(-12), val_i(13));
  printf("hi mom %b %d \n", x.t, x.i);
  return 0;
}
