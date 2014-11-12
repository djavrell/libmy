#include	"my.h"

char		*ret_nbr_base(void *var, char *base, char *ag)
{
  int		nb;
  char		*ret;
  char		*b;
  char 		end[2];
  char		*basef;

  if ((b = malloc(2 * sizeof(*b))) == NULL)
    return (NULL);
  b[1] = '\0';
  nb = var;
  ret = NULL;
  end[0] = ((nb < 0) ? '-' : 0);
  end[1] = '\0';
  nb *= ((nb < 0) ? -1 : 1);
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
  return (my_revstr(my_ev_strcat(ret, end)));
}
