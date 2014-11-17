/*
** my_strlen.c for my_strlen.c in /home/proute_k/rendu/Piscine-C-Jour_04
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Thu Oct  3 17:49:38 2013 kévin prouteau
** Last update Mon Nov 17 10:59:15 2014 kevin
*/

#include	<stdlib.h>

int		my_strlen(char *str)
{
  int		a;

  a = 0;
  while (str != NULL && str[a] != '\0')
      a++;
  return (a);
}
