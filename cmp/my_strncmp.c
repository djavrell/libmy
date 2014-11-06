/*
** my_strncmp.c for my_strncmp.c in /home/proute_k/rendu/Piscine-C-Jour_06/exo_06
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Mon Oct  7 20:48:15 2013 kévin prouteau
** Last update Wed Nov  5 11:39:33 2014 kevin
*/

#include	"../include/my.h"

int		my_strncmp(char *s1, char *s2, int n)
{
  int		i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while (i < n && s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
    i++;
  return (s1[i] - s2[i]);
}
