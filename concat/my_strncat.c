/*
** my_strncat.c for my_strncat.c in /home/proute_k/rendu/Piscine-C-Jour_07/exo_01
** 
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
** 
** Started on  Wed Oct  9 12:02:08 2013 kévin prouteau
** Last update Fri Mar 21 11:57:13 2014 kévin prouteau
*/

#include	"../include/my.h"

char		*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    i++;
  while (src[j] != '\0' && j < n)
    {
      dest[i + j] = src[j];
      j++;
    }
  dest[i + j] = '\0';
  return (dest);
}
