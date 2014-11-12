/*
** aff_list.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other/base
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Tue Nov 11 18:52:14 2014 kevin
** Last update Tue Nov 11 18:55:34 2014 kevin
*/

#include	"my.h"

void		aff_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  printf("#####################################################################\n");
  while (tmp != NULL)
    {
      printf("list->let = %c\n", tmp->let);
      tmp = tmp->next;
    }
  printf("#####################################################################\n");
}
