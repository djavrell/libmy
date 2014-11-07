#include	"my.h"

char 		*ret_lg_nbr_base(void *var, char *base)
{
  long		nb;
  char		*ret;
  char		*b;

  if ((b = malloc(2 * sizeof(*b))) == NULL)
    return (NULL);
  b[1] = '\0';
  nb = var;
  ret = NULL;
  while (nb > 0)
    {
      b[0] = base[nb % my_strlen(base)];
      ret = my_ev_strcat(ret, b);
      nb /= my_strlen(base);
    }
  return (my_revstr(ret));
}