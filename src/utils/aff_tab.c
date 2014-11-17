/*
** aff_tab.c for libmy in /home/kevin/Documents/prog/C/libmy/src/utils
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 14:42:36 2014 kevin
** Last update Mon Nov 17 10:48:55 2014 kevin
*/

#include	"my.h"

void		aff_tab(char **tab)
{
  int		i;
  int		n;

  i = 0;
  n = len_tab(tab);
  my_printf("[");
  while (tab[i] != NULL)
    {
      my_printf("'%s'", tab[i++]);
      if (i < n)
      	my_printf(", ");
    }
  my_printf("]\n");
}
