/*
** main.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:22:49 2014 kevin
** Last update Fri Jun 19 15:47:20 2015 kevin
*/

/**
 * /!\
 * ceci est un main de test, il n'est pas inclu dans la lib,
 * ne pas le orendre en compte
 * /!\
 **/

#include	"my.h"

int	    	main(void)
{
  char		*str1;
  char		*str2;
  /* int		nb; */
  /* long		t; */
  /* unsigned int	i; */
  /* char		s; */

  /* str1 = "0123456789"; */
  /* str1 = "CECI est un test de chaine de charactere"; */
  str1 = "ceci est un ";
  str2 = "test de my_ev_strcat";
  /* nb = 12345; */
  /* t = 12345; */
  /* i = 012345; */
  /* s = 'a'; */
  /* my_printf("1  - s[2:6]\t\t=> .%s[2:6].\n"\ */
  /* 	    "2  - s[2:6:upcase]\t=> .%s[2:6:upcase].\n"\ */
  /* 	    "3  - s[:6:lowcase]\t=> .%s[:6:lowcase].\n"\ */
  /* 	    "4  - s[:6:upcase]\t=> .%s[:6:upcase].\n"\ */
  /* 	    "5  - s[2::upcase]\t=> .%s[2::upcase].\n"\ */
  /* 	    "6  - s[::upcase]\t=> .%s[::upcase].\n"\ */
  /* 	    "7  - s[2:upcase]\t=> .%s[2:upcase].\n"\ */
  /* 	    "8  - s[2::]\t\t=> .%s[2::].\n"\ */
  /* 	    "9  - s[2:]\t\t=> .%s[2:].\n"\ */
  /* 	    "10 - s[:6:-1]\t\t=> .%s[:6:-1].\n"\ */
  /* 	    "11 - s[4]\t\t=> .%s[4].\n"\ */
  /* 	    "12 - d[0123]\t\t=> .%d[0123].\n"\ */
  /* 	    "13 - ld[01]\t\t=> .%ld[01].\n"\ */
  /* 	    "14 - u[pika]\t\t=> .%u[pika].\n"\ */
  /* 	    "15 - c\t\t\t=> .%c.\n",\ */
  /* 	    str1, str1, str1, str1, str1, str1, str1, str1, \ */
  /* 	    str1, str1, str1, nb, t, i, s); */
  printf("%s + %s = %s\n", str1, str2, my_ev_strcat(str1, str2));
  return (0);
}
