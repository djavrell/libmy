/*
** ret_nbr_base.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:27:09 2014 kevin
** Last update Fri Nov 14 20:02:31 2014 kevin
*/

#include	"my.h"

char		*ret_nbr_base(void *var, char *base, char *ag)
{
  int		*nb;
  int		n;
  char		*ret;
  char		*b;
  char 		end[2];
  char		*basef;

  if ((b = malloc(2 * sizeof(*b))) == NULL)
    return (NULL);
  b[1] = '\0';
  nb = (int*)var;
  n = *nb;
  ret = NULL;
  end[0] = ((n < 0) ? '-' : 0);
  end[1] = '\0';
  n *= ((n < 0) ? -1 : 1);
  basef = base;
  check_ag_base(ag, &basef);
  while (nb > 0)
    {
      b[0] = basef[n % my_strlen(basef)];
      ret = my_ev_strcat(ret, b);
      n /= my_strlen(basef);
    }
  free(b);
  /* free(basef); */
  return (my_revstr(my_ev_strcat(ret, end)));
}
