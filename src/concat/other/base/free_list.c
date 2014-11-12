/*
** free_list.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other/base
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 10:31:48 2014 kevin
** Last update Wed Nov 12 10:34:55 2014 kevin
*/

#include	"my.h"

void		free_list(t_list *list)
{
  t_list	*tmp;

  while (list != NULL)
    {
      tmp = list;
      list = list->next;
      free(tmp);
    }
  free(list);
}
