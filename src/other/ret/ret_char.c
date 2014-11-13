/*
** ret_char.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:26:49 2014 kevin
** Last update Wed Nov 12 11:26:50 2014 kevin
*/

#include	"my.h"

char 		*ret_char(void *var, char *base, char *ag)
{
  char 		ret;

  (void)base;
  ret = var;
  return (&ret);
}
