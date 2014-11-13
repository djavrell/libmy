/*
** my_fcat.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:25:58 2014 kevin
** Last update Wed Nov 12 11:25:59 2014 kevin
*/

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
