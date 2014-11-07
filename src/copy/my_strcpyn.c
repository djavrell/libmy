/*
** my_strcpyn.c for my_strcpyn.c in /home/proute_k/rendu/PSU_2013_minishell1
** 
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
** 
** Started on  Thu Dec 19 11:45:04 2013 kévin prouteau
** Last update Wed Feb 26 12:04:01 2014 kévin prouteau
*/

#include	"my.h"

char		*my_strcpyn(char *dest, char *src, int n)
{
  int		i;

  i = 0;
  while (src[n])
    {
      dest[i] = src[n];
      i++;
      n++;
    }
  dest[i] = '\0';
  return (dest);
}
