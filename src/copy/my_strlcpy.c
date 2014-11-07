/*
** my_strlcpy.c for my_strlcpy.c in /home/proute_k/rendu/Piscine-C-lib/fnct
** 
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
** 
** Started on  Fri Mar 21 13:02:25 2014 kévin prouteau
** Last update Fri Mar 21 13:03:28 2014 kévin prouteau
*/

char	*my_strlcpy(char *dest, char *src, int beg, int size)
{
  int	i;

  i = 0;
  while (src[beg + i] != '\0' && i < size)
    {
      dest[i] = src[beg + i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
