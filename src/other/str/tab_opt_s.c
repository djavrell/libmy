/*
** tab_opt_s.c for libmy in /home/kevin/Documents/prog/C/libmy/src/other/str
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Thu Nov 13 15:44:02 2014 kevin
** Last update Thu Nov 13 16:03:23 2014 kevin
*/

#include	"my.h"

t_opt_s		*tab_opt_s(void)
{
  static t_opt_s tab[] =
    {
      {"upcase", NULL},
      {"lowcase", NULL},
      {"-1", NULL},
      {"trunc", NULL},
      {NULL, NULL}
    };
  return (tab);
}
