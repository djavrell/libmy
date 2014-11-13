/*
** call_func.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:29:06 2014 kevin
** Last update Wed Nov 12 11:29:14 2014 kevin
*/

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
    ret = tab[i].func(va_arg(ap, void*), tab[i].base, param);
  return (ret);
}
