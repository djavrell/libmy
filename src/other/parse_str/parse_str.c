/*
** parse_str.c for libmy in /home/kevin/Documents/prog/C/my_fcat
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Thu Nov  6 10:28:23 2014 kevin
** Last update Mon Nov 17 11:23:40 2014 kevin
*/

#include  "my.h"

char      *parse_str(char *str, va_list ap)
{
  char    *ret;
  char    *tmp;
  int     beg;
  int     end;

  ret = NULL;
  beg = 0;
  end = 0;
  while (str[end] != '\0')
  {
    if (str[end] == '%')
    {
      ret = my_ev_strlcat(ret, str, beg, end);
      if ((tmp = parse_arg(&str, ap, &end)) == NULL)
      	return (NULL);
      ret = my_ev_strcat(ret, tmp);
      beg = end;
    }
    end += (str[end] == '\0' ? 0 : 1);
  }
  ret = my_ev_strlcat(ret, str, beg, end);
  return (ret);
}
