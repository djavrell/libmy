/*
** my_revstr.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:30:30 2014 kevin
** Last update Wed Nov 12 11:30:34 2014 kevin
*/

#include	"my.h"

char		*my_revstr(char *str)
{
  int 		i;
  int 		a;
  char 		*b;

  i = (my_strlen(str) - 1);
  a = 0;
  if ((b = malloc((i + 2) * sizeof(*b))) == NULL)
    return (NULL);
  while (a < (i + 1))
    {
      b[a] = str[i - a];
      a++;
    }
  b[a] = '\0';
  return (b);
}
