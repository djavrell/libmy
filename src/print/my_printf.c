/*
** my_printf.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:30:07 2014 kevin
** Last update Wed Nov 12 11:30:07 2014 kevin
*/

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
