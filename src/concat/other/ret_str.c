#include	"my.h"

char 		*ret_str(void *var, char *base, char *ag)
{
  char		*arg;
  int		beg;
  int		end;

  (void)base;
  arg = NULL;
  in_crochet(ag, &arg);
  if (var == NULL)
    return ("(null)");
  /* if (set_born(arg, &beg, &end) == NULL) */
  /*   return ("(null)"); */
  return ((char*)var);
}
