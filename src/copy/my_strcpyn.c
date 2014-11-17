/*
** my_strcpyn.c for my_strcpyn.c in /home/proute_k/rendu/PSU_2013_minishell1
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Thu Dec 19 11:45:04 2013 kévin prouteau
** Last update Mon Nov 17 10:48:12 2014 kevin
*/

char	*my_strcpyn(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[n])
    {
      dest[i] = src[n];
      i++;
      n++;
    }
  dest[i] = '\0';
  return (dest);
}
