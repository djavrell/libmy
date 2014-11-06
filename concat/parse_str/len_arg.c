/*
** len_arg.c for libmy in /home/kevin/Documents/prog/C/my_fcat/concat/parse_str
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov  5 14:04:25 2014 kevin
** Last update Thu Nov  6 11:00:54 2014 kevin
*/

#include	"my.h"

int		len_arg(char *str, int *end)
{
  int		i;
  int		len;
  int		n;
  t_ext		*tab;

  i = *end + 1;
  len = 1;
  n = 0;
  tab = tab_ext();
  while (tab[n].opt != NULL && str[i] != tab[n].opt[0])
    ++n;
  if (tab[n].opt == NULL)
    return (0);
  len += ((tab[n].len != -1) ? tab[n].len + 1 : 0);
  if (str[*end + len] == '[')
    while (str[*end + len] != ']')
      len++;
  len += ((str[*end + len] == ']') ? 1 : 0);
  return (len);
}
