/*
** init_list.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other/base
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Tue Nov 11 16:02:41 2014 kevin
** Last update Tue Nov 11 16:04:19 2014 kevin
*/

#include	"my.h"

t_list		*init_elem(void)
{
  t_list	*new;

  if ((new = malloc(sizeof(*new))) == NULL)
    return (NULL);
  new->next = NULL;
  return (new);
}
