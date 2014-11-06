/*
** rec_arg.c for libmy in /home/kevin/Documents/prog/C/my_fcat
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Thu Nov  6 10:28:05 2014 kevin
** Last update Thu Nov  6 10:55:34 2014 kevin
*/

#include  "my.h"

char        *rec_arg(char **str, char **arg, int *end)
{
  int       i;
  int       n;
  int       m;

  i = 0;
  n = 0;
  m = *end;
  i = len_arg(*str, end);
  if ((*arg = malloc((i + 1) * sizeof(*arg))) == NULL)
    return (NULL);
  while (m < (i + *end))
    {
      (*arg)[n] = (*str)[m];
      m++;
      n++;
    }
  (*arg)[n] = '\0';
  *end = m;
  return (*arg);
}
