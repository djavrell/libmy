/*
** ret_us_nbr_base.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:27:43 2014 kevin
** Last update Fri Nov 14 19:47:56 2014 kevin
*/

#include	"my.h"

char 		*ret_us_nbr_base(void *var, char *base, char *ag)
{
  unsigned int	*n;
  char		*ret;
  char		*b;
  char		*basef;
  unsigned int	nb;

  if ((b = malloc(2 * sizeof(*b))) == NULL)
    return (NULL);
  b[1] = '\0';
  n = (unsigned int*)var;
  nb = *n;
  ret = NULL;
  basef = base;
  check_ag_base(ag, &basef);
  while (nb > 0)
    {
      b[0] = basef[nb % my_strlen(basef)];
      ret = my_ev_strcat(ret, b);
      nb /= my_strlen(basef);
    }
  free(b);
  free(basef);
  return (my_revstr(ret));
}
