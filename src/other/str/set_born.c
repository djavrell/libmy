/*
** set_born.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other/str
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:10:26 2014 kevin
** Last update Wed Nov 12 16:20:23 2014 kevin
*/

#include	"my.h"

int		set_born(char *arg, int *beg, int *end)
{
  char		**tab;
  int		len;
  int		tmp;

  tab = my_str_to_wordtab(arg, ':');
  len = len_tab(tab);
  *beg = (len >= 2) ? my_getnbr(tab[0]) : 0;
  *beg *= (*beg <= 0) ? -1 : 1;
  *end = my_getnbr((len >= 2) ? tab[1] : tab[0]);
  *end *= (*end <= 0) ? -1 : 1;
  if (len >= 2 && *end < *beg)
    {
      tmp = *end;
      *end = *beg;
      *beg = tmp;
    }
  return (SUCCESS);
}
