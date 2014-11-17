/*
** my_strlowcase.c for my_strlowcase.c in /home/proute_k/rendu/Piscine-C-Jour_06/exo_07
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Tue Oct  8 10:52:42 2013 kévin prouteau
** Last update Mon Nov 17 10:50:45 2014 kevin
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    str[i] = ((str[i] >= 65 && str[i] <= 90) ? str[i] + 32 : str[i]);
  return (str);
}
