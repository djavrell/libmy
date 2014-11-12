/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/proute_k/rendu/Piscine-C-lib/my/fnct
**
** Made by kévin prouteau
** Login   <proute_k@epitech.net>
**
** Started on  Mon Feb  3 10:06:56 2014 kévin prouteau
** Last update Sat Mar 29 20:23:09 2014 kévin prouteau
*/

#include	<stdlib.h>
#include	"my.h"

int		nb_word(char *str, char op)
{
  int		i;
  int		j;

  i = 0;
  j = 1;
  while (str[i++] != '\0')
    (str[i] == op) ? j++ : 0;
  return (j);
}

int		s_word(char *str, int i, char op)
{
  int		j;

  j = i;
  while (str[j] != op && str[j] != '\0')
    j++;
  return (j - i + 1);
}

char		**my_str_to_wordtab(char *str, char op)
{
  char		**t;
  int		w;
  int		s;
  int		i;
  int		j;

  i = 0;
  if (str == NULL || str[0] == '\0')
    return (NULL);
  if ((t = malloc(((w = nb_word(str, op)) + 1) * sizeof(*t))) == NULL)
    return (NULL);
  w = 0;
  while (i < my_strlen(str))
    {
      j = -1;
      if ((t[w] = malloc((s = s_word(str, i, op)) * sizeof(**t))) == NULL)
	return (NULL);
      while (++j <= (s - 1))
	t[w][j] = str[i++];
      t[w++][j - 1] = '\0';
    }
  t[w] = NULL;
  return (t);
}
