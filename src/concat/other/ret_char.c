#include	"my.h"

char 		*ret_char(void *var, char *base, char *ag)
{
  char 		ret;

  (void)base;
  ret = var;
  return (&ret);
}
