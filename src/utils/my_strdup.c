/*
** my_strdup.c for my_strdup.c in /home/proute_k/rendu/Piscine-C-Jour_08
** 
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
** 
** Started on  Wed Oct  9 16:00:23 2013 kévin prouteau
** Last update Tue Mar 25 10:32:32 2014 kévin prouteau
*/

#include	"../include/my.h"

char		*my_strdup(char *src)
{
  char		*tab;
  int		taille_s;
  int		i;

  i = 0;
  taille_s = my_strlen(src);
  if ((tab = malloc((taille_s + 1) * sizeof(*src))) == NULL)
    return (NULL);
  while (src != NULL && src[i] != '\0')
    {
      tab[i] = src[i];
      i++;
    }
  tab[i] = '\0';
  return (tab);
}
