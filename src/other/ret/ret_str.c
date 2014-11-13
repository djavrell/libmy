/*
** ret_str.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:27:31 2014 kevin
** Last update Wed Nov 12 16:20:20 2014 kevin
*/

#include	"my.h"

char 		*ret_str(void *var, char *base, char *ag)
{
  char		*arg;
  char		*str;
  int		ret;
  int		beg;
  int		end;

  (void)base;
  (char*)var;
  beg = 0;
  end = 0;
  if (var == NULL)
    return ("(null)");
  arg = NULL;
  str = NULL;
  in_crochet(ag, &arg);
  if (arg != NULL)
    ret = set_born(arg, &beg, &end);
  str = my_ev_strlcat(str, var, beg, end);
  return (str);
}
