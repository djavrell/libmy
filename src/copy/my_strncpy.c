/*
** my_strncpy.c for my_strncpy.c in /home/proute_k/rendu/Piscine-C-Jour_06/exo_02
** 
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
** 
** Started on  Mon Oct  7 10:47:47 2013 kévin prouteau
** Last update Fri Mar 21 11:59:16 2014 kévin prouteau
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
