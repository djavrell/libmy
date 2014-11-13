/*
** add.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other/base
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Tue Nov 11 16:00:22 2014 kevin
** Last update Tue Nov 11 16:24:34 2014 kevin
*/

#include	"my.h"

t_list		*add(t_list *list, t_list *new)
{
  t_list	*tmp;

  tmp = list;
  if (tmp == NULL)
    return (new);
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = new;
  return (list);
}
