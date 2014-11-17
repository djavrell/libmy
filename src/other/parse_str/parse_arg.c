/*
** parse_arg.c for libmy in /home/kevin/Documents/prog/C/my_fcat
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Thu Nov  6 10:28:40 2014 kevin
** Last update Mon Nov 17 11:23:35 2014 kevin
*/

#include  "my.h"

char      *parse_arg(char **str, va_list ap, int *end)
{
  char    *ret;
  char    *arg;

  arg = NULL;
  if (rec_arg(str, &arg, end) == NULL)
    return ("");
  if ((ret = call_func(&arg, ap)) == NULL)
    return ("");
  free(arg);
  return (ret);
}
