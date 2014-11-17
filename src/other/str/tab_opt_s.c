/*
** tab_opt_s.c for libmy in /home/kevin/Documents/prog/C/libmy/src/other/str
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Thu Nov 13 15:44:02 2014 kevin
** Last update Mon Nov 17 10:40:53 2014 kevin
*/

#include	"my.h"

t_opt_s		*tab_opt_s(void)
{
  static t_opt_s tab[] =
    {
      {"upcase", &my_strupcase},
      {"lowcase", &my_strlowcase},
      {"-1", &my_revstr},
      {NULL, NULL}
    };
  return (tab);
}
