#ifndef __VERSIS_VM_STATE_H__
#define __VERSIS_VM_STATE_H__

#include "../buffer/buffer.h"
#include "../section/section.h"
#include "../../versis_shared.h"

typedef struct
{
  size_t        p_size;       /* Struct size */
  int           status;       /* Status code */
  vm_section_t *c_sect;       /* Current section(s) */
  int           max_s;        /* Max section */
  vm_section_t  sections[1];  /* Section Matrix */
} vm_state_t;

//@TODO constructor and destructor

#endif // __VERSIS_VM_STATE_H__
