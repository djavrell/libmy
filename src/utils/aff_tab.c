/*
** aff_tab.c for libmy in /home/kevin/Documents/prog/C/libmy/src/utils
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 14:42:36 2014 kevin
** Last update Wed Nov 12 15:00:08 2014 kevin
*/

#include	"my.h"

void		aff_tab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    my_printf(".%s.\n", tab[i++]);
}
