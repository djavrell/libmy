/*
** aff_tab.c for libmy in /home/kevin/Documents/prog/C/libmy/src/utils
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 14:42:36 2014 kevin
** Last update Fri Nov 14 14:42:28 2014 kevin
*/

#include	"my.h"

void		aff_tab(char **tab)
{
  int		i;
  int		n;

  i = 0;
  n = len_tab(tab);
  printf("[");
  while (tab[i] != NULL)
    {
      printf("'%s'", tab[i++]);
      if (i < n)
      	printf(", ");
    }
  printf("]\n");
}
