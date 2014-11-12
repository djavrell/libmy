#include	"my.h"

int		my_printf(char *str, ...)
{
  char		*ret;
  va_list	ap;
  int		len;

  va_start(ap, str);
  ret = parse_str(str, ap);
  ret = (ret == NULL ? "(null\n)" : ret);
  write(1, ret, (len = my_strlen(ret)));
  va_end(ap);
  free(ret);
  return (len);
}
