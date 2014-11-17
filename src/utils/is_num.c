/*
** my_str_isnum.c for my_str_isnum.c in /home/proute_k/rendu/Piscine-C-Jour_06/exo_11
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Tue Oct  8 18:03:04 2013 kévin prouteau
** Last update Mon Nov 17 11:00:16 2014 kevin
*/

#include	"my.h"

int		is_num(char *str)
{
  int		i;

  i = 0;
  if (str == NULL)
    return (ERROR);
  while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    i++;
  if (str[i] != '\0')
    return (ERROR);
  return (0);
}
