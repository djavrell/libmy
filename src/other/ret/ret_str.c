/*
** ret_str.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:27:31 2014 kevin
** Last update Mon Nov 17 10:37:52 2014 kevin
*/

#include	"my.h"

char 		*ret_str(void *var, char *base, char *ag)
{
  char		*str;
  char		*ret;
  char		*arg;
  int		beg;
  int		end;
  static int i = 0;

  (void)base;
  (char*)var;
  beg = 0;
  end = 0;
  arg = NULL;
  str = NULL;
  ret = NULL;
  if (var == NULL)
    return ("(null)");
  in_crochet(ag, &arg);
  if (arg != NULL)
    ret = set_born(arg, &beg, &end);
  else
    end = my_strlen(var);
  end = ((end == -1 || end == 0) ? my_strlen(var) : end);
  str = my_ev_strlcat(str, var, beg, end);
  if (ret != NULL)
    analyse_ret(&str, ret);
  return (str);
}
