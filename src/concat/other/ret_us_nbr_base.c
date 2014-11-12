#include	"my.h"

char 		*ret_us_nbr_base(void *var, char *base, char *ag)
{
  unsigned int	nb;
  char		*ret;
  char		*b;
  char		*basef;

  if ((b = malloc(2 * sizeof(*b))) == NULL)
    return (NULL);
  b[1] = '\0';
  nb = var;
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
