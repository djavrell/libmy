/*
** m_getnbr.c for my_getnbr.c in /home/proute_k/rendu
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Wed Oct  9 15:41:12 2013 kévin prouteau
** Last update Wed Nov 12 11:57:50 2014 kevin
*/

#include	"my.h"

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
