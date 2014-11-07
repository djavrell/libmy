/*
** my_strcmp.c for my_strcmp.c in /home/proute_k/rendu/Piscine-C-Jour_06/exo_05
** 
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
** 
** Started on  Mon Oct  7 16:42:15 2013 kévin prouteau
** Last update Fri Jan  3 11:14:02 2014 kévin prouteau
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
    i++;
  return (s1[i] - s2[i]);
}
