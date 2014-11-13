/*
** my_fprintf.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:29:58 2014 kevin
** Last update Wed Nov 12 11:29:59 2014 kevin
*/

#include	"my.h"

int		my_fprintf(int fd, char *str, ...)
{
  va_list	ap;
  char		*ret;
  int		len;

  va_start(ap, str);
  ret = parse_str(str, ap);
  ret = (ret == NULL ? "(null)\n" : ret);
  len = my_strlen(ret);
  len = (((len >= 0) && (fd >= 0)) ? write(fd, ret, len) : -1);
  va_end(ap);
  free(ret);
  return (len);
}
