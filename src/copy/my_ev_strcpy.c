/*
** my_ev_strcpy.c for lib in /home/proute_k/rendu/Piscine-C-lib/my
** 
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
** 
** Started on  Thu Jun 12 18:47:42 2014 kévin prouteau
** Last update Wed Jun 18 17:12:55 2014 kévin prouteau
*/

#include	"my.h"

char		*my_ev_strcpy(char *dest, char *src)
{
  int		i;

  i = 0;
  if (dest == NULL)
    if ((dest = malloc((my_strlen(src) + 1) * sizeof(*dest))) == NULL)
      return (NULL);
  while (src != NULL && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
