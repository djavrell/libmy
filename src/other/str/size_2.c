/*
** size_2.c for libmy in /home/kevin/Documents/prog/C/libmy/src/other/str
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Fri Nov 14 14:24:22 2014 kevin
** Last update Fri Nov 14 15:28:52 2014 kevin
*/

#include	"my.h"

char		*size_2(char **tab, int *beg, int *end)
{
  char		*ret;

  *beg = (tab[0] == NULL ? 0 : (is_num(tab[0]) == 0 ? my_getnbr(tab[0]) : 0));
  *end = (is_num(tab[1]) == 0 ? my_getnbr(tab[1]) : -1);
  if (my_strcmp(tab[1], "") == 0)
    *end = -1;
  ret = (is_num(tab[1]) != 0 ? my_strdup(tab[1]) : NULL);
  return (ret);
}
