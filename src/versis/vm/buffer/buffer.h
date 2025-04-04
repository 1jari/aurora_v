#ifndef __VERSIS_VM_BUFFER_H__
#define __VERSIS_VM_BUFFER_H__

#include "../../versis_shared.h"

/* Definition */
typedef struct
{
  int    *buf;  /* Buffer data */
  size_t  idx;  /* BUffer index in bytes */
} vm_buffer_t;

VERSIS_API
static vm_buffer_t
vm_buffer()
{
  vm_buffer_t b;

  /* Allocate memory for the buffer  */
  b.buf = (int*)malloc(sizeof(int));
  b.idx = 0;
  return b;
}

VERSIS_API
static void
_vm_buffer(vm_buffer_t *b)
{
  if(b)
  {
    if(b->buf)
    {
      free(b->buf);
    }
  }
}


#endif // __VERSIS_VM_BUFFER_H__
