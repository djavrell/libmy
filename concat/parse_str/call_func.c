#include	"my.h"

char		*call_func(char **ag, va_list ap)
{
  t_ext    	*tab;
  char      	*ret;
  char 		*param;
  int       	i;

  ret = NULL;
  i = 0;
  tab = tab_ext();
  param = (*ag) + 1;
  while (my_strncmp(param, tab[i].opt, tab[i].len) != 0 && tab[i].opt != NULL)
    i++;
  if ((tab[i].opt) != NULL)
    ret = tab[i].func(va_arg(ap, void*), tab[i].base);
  /* printf("call_func: param = %s; tab[%d].opt = %s, len = %d, cmp = %d, ret = %s\n", */
  /* 	 param, i, tab[i].opt, tab[i].len, my_strncmp(param, tab[i].opt, tab[i].len), ret); */
  return (ret);
}
