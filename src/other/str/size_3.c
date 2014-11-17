/*
** size_3.c for libmy in /home/kevin/Documents/prog/C/libmy/src/other/str
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Fri Nov 14 16:29:25 2014 kevin
** Last update Mon Nov 17 10:23:43 2014 kevin
*/

#include	"my.h"

char		*size_3(char **tab, int *beg, int *end)
{
  char		*ret;

  *beg = (tab[0] == NULL ? 0 : (is_num(tab[0]) == 0 ? my_getnbr(tab[0]) : 0));
  *end = (tab[1] == NULL ? -1 : (is_num(tab[1]) == 0 ? my_getnbr(tab[1]) : -1));
  ret = ((my_strcmp(tab[2], "") != 0 && tab[2] != NULL) ? \
	 my_strdup(tab[2]) : NULL);
  return (ret);
}
