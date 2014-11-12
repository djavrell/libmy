/*
** validation_base.c for libmy in /home/kevin/Documents/prog/C/libmy/src/concat/other/base
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Tue Nov 11 15:50:50 2014 kevin
** Last update Wed Nov 12 10:31:32 2014 kevin
*/

#include	"my.h"

char		*validation_base(char **arg)
{
  int		i;
  t_list	*list;
  t_list	*elem;

  i = 0;
  list = NULL;
  while ((*arg)[i] != '\0')
    {
      elem = init_elem();
      elem->let = (*arg)[i];
      list = add(list, elem);
      if (let_in_list((*arg)[i], list) == ERROR)
	return (NULL);
      i++;
    }
  free_list(list);
  return (*arg);
}
