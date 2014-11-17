/*
** my_ev_strncat.c for lib in /home/proute_k/rendu/Piscine-C-lib/my
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Thu Jun 12 15:48:34 2014 kévin prouteau
** Last update Mon Nov 17 10:46:44 2014 kevin
*/

#include	"my.h"

char		*my_ev_strncat(char *dest, char *src, int size)
{
  char		*str;

  if (dest == NULL)
    {
      if ((str = malloc ((size + 1) * sizeof(*str))) == NULL)
        return (NULL);
      str = my_strncpy(str, src, size);
      return (str);
    }
  else
    {
      if ((str = malloc((my_strlen(dest) + size + 1) * sizeof(*str))) == NULL)
        return (NULL);
      str = my_strcpy(str, dest);
      str = my_strncat(str, src, size);
      free(dest);
      return (str);
    }
}
