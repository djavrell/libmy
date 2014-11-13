/*
** get_next_line.c for genealfs in /home/proute_k/rendu
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Wed Jun 18 16:31:06 2014 kévin prouteau
** Last update Wed Nov 12 11:38:48 2014 kevin
*/

#include	<stdlib.h>
#include	"my.h"

char		*my_cat(char *str, char *buff)
{
  char		*ret;

  ret = NULL;
  ret = my_ev_strcat(str, buff);
  free(str);
  return (ret);
}

char		*get_next_line(const int fd)
{
  int		i;
  char		buff[2];
  char		*ret;

  if ((ret = malloc(1 * sizeof(*ret))) == NULL)
    return (NULL);
  ret[0] = '\0';
  while ((i = read(fd, buff, 1)) != -1)
    {
      if (i == 0 && ret[0] == '\0')
	return (NULL);
      if (i == 0 && ret[0] != '\0')
	return (ret);
      buff[1] = '\0';
      if (buff[0] == '\n')
	return (ret);
      else
	ret = my_cat(ret, buff);
    }
  return ((i == -1) ? NULL : ret);
}
