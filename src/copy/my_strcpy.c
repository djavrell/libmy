/*
** my_strcpy.c for my_strcpy.c in /home/proute_k/rendu/Piscine-C-Jour_06
** 
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
** 
** Started on  Mon Oct  7 08:53:26 2013 kévin prouteau
** Last update Wed Feb 26 09:43:05 2014 kévin prouteau
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
