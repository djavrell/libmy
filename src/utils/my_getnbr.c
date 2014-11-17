/*
** m_getnbr.c for my_getnbr.c in /home/proute_k/rendu
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Wed Oct  9 15:41:12 2013 kévin prouteau
** Last update Mon Nov 17 10:59:38 2014 kevin
*/

#include	<stdlib.h>

int		my_getnbr(char *str)
{
  int		i;
  int		result;

  i = 1;
  result = 0;
  if (str == NULL)
    return (0);
  while (*str != '\0' && (*str == '+' || *str == '-'))
    {
      if (*str == '-')
	i = -i;
      str++;
    }
  while (*str != '\0' && *str >= '0' && *str <= '9')
    {
      result *= 10;
      result += (*str - '0');
      str++;
    }
  return (i * result);
}
