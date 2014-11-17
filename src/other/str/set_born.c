/*
** set_born.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other/str
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:10:26 2014 kevin
** Last update Mon Nov 17 10:30:47 2014 kevin
*/

#include	"my.h"

char		*set_born(char *arg, int *beg, int *end)
{
  char		**tab;
  char		*ret;
  int		len;
  int		tmp;

  ret = NULL;
  *beg = 0;
  len = len_tab(tab = my_str_to_wordtab(arg, ':'));
  if (len > 3)
    return (NULL);
  ret = (len == 1 ? size_1(tab, beg, end)		\
  	 : ((len == 2) ? size_2(tab, beg, end)		\
  	    : size_3(tab, beg, end)));
  return (ret);
}
