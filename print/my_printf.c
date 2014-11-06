#include	"../include/my.h"

int		my_printf(char *str, ...)
{
  char		*ret;
  va_list	ap;
  int		len;

  va_start(ap, str);
  ret = parse_str(str, ap);
  if (ret == NULL)
    write(1, "(null)\n", 7);
  else
    write(1, ret, len = my_strlen(ret));
  va_end(ap);
  return (len);
}