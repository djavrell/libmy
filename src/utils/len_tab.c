/*
** len_tab.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:50:37 2014 kevin
** Last update Wed Nov 12 11:51:32 2014 kevin
*/

#include	"my.h"

int		len_tab(char **tab)
{
  int		i;

  i = 0;
  if (tab == NULL)
    return (0);
  while (tab[i] != NULL)
    i++;
  return (i);
}
