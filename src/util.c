
#include "base.h"
#include "util.h"

val_t rand_val(void)
{
  return (val_t) rand() / (val_t) RAND_MAX;
}