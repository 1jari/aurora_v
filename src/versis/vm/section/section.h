#ifndef __VERSIS_VM_SECTION_H__
#define __VERSIS_VM_SECTION_H__

#include "../buffer/buffer.h"
#include "../../versis_shared.h"

typedef struct
{
  vm_buffer_t r_buf;  /* Reduction Buffer */
  vm_buffer_t   buf;  /* Buffer */
  unsigned int  pos;  /* Position */
  unsigned int  ofs;  /* Byte offset */
} vm_section_t;

VERSIS_API
static vm_section_t
vm_section()
{
  vm_section_t s;

  /* Initialize Buffers */
  s.r_buf   = vm_buffer();
  s.buf     = vm_buffer();

  /* Define integer properties */
  s.pos     = 0;
  s.ofs     = 0;

  return s;
}

VERSIS_API
static void
_vm_section(vm_section_t *s)
{
  if(s)
  {
    /* Clean buffers */
    _vm_buffer(&s->r_buf);
    _vm_buffer(&s->buf);
  }
}

#endif // __VERSIS_VM_SECTION_H__
