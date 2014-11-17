/*
** analyse_ret.c for libmy in /home/kevin/Documents/prog/C/libmy/src/other/str
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Thu Nov 13 14:48:50 2014 kevin
** Last update Mon Nov 17 10:38:08 2014 kevin
*/

#include	"my.h"

char		*analyse_ret(char **str, char *ret)
{
  int		i;
  t_opt_s	*tab;

  i = 0;
  tab = tab_opt_s();
  while (my_strcmp(tab[i].str, ret) != 0 && tab[i].str != NULL)
    i++;
  if (tab[i].str != NULL)
      *str = tab[i].func(*str);
  return (*str);
}
