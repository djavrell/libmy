/*
** set_born.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other/str
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:10:26 2014 kevin
** Last update Fri Nov 14 15:51:59 2014 kevin
*/

#include	"my.h"

char		*set_born(char *arg, int *beg, int *end)
{
  char		**tab;
  char		*ret;
  int		len;
  int		tmp;
  static int i = 1;

  ret = NULL;
  *beg = 0;
  len = len_tab(tab = my_str_to_wordtab(arg, ':'));
  if (len > 3)
    return (NULL);
  ret = (len == 1 ? size_1(tab, beg, end)		\
  	 : ((len == 2) ? size_2(tab, beg, end)	\
  	    : size_1(tab, beg, end)));
  /* if (len == 2) */
  /*   { */
      printf("set_born %d: ret = %s, beg = %d, end = %d\nlen = %d\ntab = ", \
	     i, ret, *beg, *end, len);
      aff_tab(tab);
      printf("\n");
    /* } */
  i++;
  return (ret);
}

/**
char		*set_born(char *arg, int *beg, int *end)
{
  char		**tab;
  char		*ret;
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
  ret = ((len >= 3) ? my_strdup(tab[2]) : NULL);
  printf("set_born: ret = %s, beg = %d, end = %d\n", ret, *beg, *end);
  return (ret);
}
**/
