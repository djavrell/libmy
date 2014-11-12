/*
** let_in_list.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other/base
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Tue Nov 11 16:12:49 2014 kevin
** Last update Tue Nov 11 19:04:31 2014 kevin
*/

#include	"my.h"

int		let_in_list(char let, t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->next != NULL)
    {
      if (tmp->let == let)
	return (ERROR);
      tmp = tmp->next;
    }
  return ((tmp == NULL) ? ERROR : SUCCESS);
}
