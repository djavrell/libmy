/*
** in_crochet.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Tue Nov 11 14:55:05 2014 kevin
** Last update Fri Jun 19 15:30:36 2015 kevin
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
  if (ag[i] != '[' || ag[i] == '\0')
    return (NULL);
  i++;
  while (ag[i + n] != ']' && ag[i + n] != '\0')
    n++;
  if (ag[i + n] != ']' || ag[i + n] == '\0')
    return (NULL);
  if ((*arg = malloc(n * sizeof(*arg))) == NULL)
    return (NULL);
  *arg = my_strlcpy(*arg, ag, i, n);
}
