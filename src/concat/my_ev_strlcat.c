/*
** my_ev_strlcat.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:25:47 2014 kevin
** Last update Wed Nov 12 16:11:52 2014 kevin
*/

#include	"my.h"

char		*my_ev_strlcat(char *d, char *src, int beg, int end)
{
  int		i;
  char		*s;

  i = 0;
  if ((s = malloc((my_strlen(d) + check_len(src, beg, end) + 1) \
		  * sizeof(char))) == NULL)
    return (NULL);
  while (d != NULL && d[i] != '\0')
    {
      s[i] = d[i];
      i++;
    }
  while (src != NULL && (beg < end && src[beg] != '\0'))
    {
      s[i] = src[beg];
      beg++;
      i++;
    }
  s[i] = '\0';
  return (s);
}
