/*
** in_crochet.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Tue Nov 11 14:55:05 2014 kevin
** Last update Tue Nov 11 20:09:59 2014 kevin
*/

#include	"my.h"

void		*in_crochet(char *ag, char **arg)
{
  int		i;
  int		n;

  i = 0;
  n = 0;
  while (ag[i] != '[' && ag[i] != '\0')
    i++;
  if (ag[i] != '[')
    return (NULL);
  i++;
  while (ag[i + n] != ']' && ag[i] != '\0')
    n++;
  if ((*arg = malloc(n * sizeof(*arg))) == NULL)
    return (NULL);
  *arg = my_strlcpy(*arg, ag, i, n);
}
