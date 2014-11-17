/*
** my_strupcase.c for my_strupcase.c in /home/proute_k/rendu/Piscine-C-Jour_06/exo_07
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Tue Oct  8 10:32:05 2013 kévin prouteau
** Last update Mon Nov 17 10:51:32 2014 kevin
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    str[i] = ((str[i] >= 97 && str[i] <= 122) ? str[i] - 32 : str[i]);
  return (str);
}
