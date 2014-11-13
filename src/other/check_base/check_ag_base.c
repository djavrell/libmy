/*
** check_ag_base.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Tue Nov 11 14:43:58 2014 kevin
** Last update Wed Nov 12 10:24:34 2014 kevin
*/

#include	"my.h"

char		*check_ag_base(char *ag, char **arg)
{
  in_crochet(ag, arg);
  if (*arg == NULL)
    return (NULL);
  if (validation_base(arg) == NULL)
    *arg = "0123456789";
  return (*arg);
}
