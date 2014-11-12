#include	"my.h"

char		*my_fcat(char *str, ...)
{
  char		*ret;
  va_list	ap;

  va_start(ap, str);
  ret = parse_str(str, ap);
  va_end(ap);
  return (ret);
}
