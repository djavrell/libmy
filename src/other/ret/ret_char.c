/*
** ret_char.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:26:49 2014 kevin
** Last update Fri Jun 19 15:26:31 2015 kevin
*/

#include	"my.h"

char		*ret_char(void *var, char *base, char *ag)
{
  char		*ret;

  (void)base;
  (void)ag;
  if ((ret = malloc(2 * sizeof(*ret))) == NULL)
    return (NULL);
  ret[0] = var;
  ret[1] = '\0';
  return (ret);
}
