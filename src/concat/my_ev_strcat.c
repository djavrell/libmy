/*
** my_ev_strcat.c for my_ev_strcat.c in /home/proute_k/rendu/genealfs/lib/sources
** 
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
** 
** Started on  Wed Jun 18 16:38:01 2014 kévin prouteau
** Last update Wed Jun 18 17:06:35 2014 kévin prouteau
*/

#include	"../include/my.h"

char		*my_ev_strcat(char *d, char *src)
{
  int		i;
  int		j;
  char		*s;

  i = 0;
  j = 0;
  if ((s = malloc((my_strlen(d) + my_strlen(src) + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (d != NULL && d[i] != '\0')
    {
      s[i] = d[i];
      i++;
    }
  while (src != NULL && src[j] != '\0')
    {
      s[i] = src[j];
      j++;
      i++;
    }
  s[i] = '\0';
  return (s);
}
