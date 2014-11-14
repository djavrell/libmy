/*
** my_strcmp.c for my_strcmp.c in /home/proute_k/rendu/Piscine-C-Jour_06/exo_05
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Mon Oct  7 16:42:15 2013 kévin prouteau
** Last update Thu Nov 13 16:17:43 2014 kevin
*/

#include	"my.h"

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
    i++;
  return (s1[i] - s2[i]);
}
