/*
** main.c for libmy in /home/kevin/Documents/prog/C/libmy
**
** Made by kevin
** Login   <kevin@epitech.net>
**
** Started on  Wed Nov 12 11:22:49 2014 kevin
** Last update Fri Nov 14 16:23:52 2014 kevin
*/

#include	"my.h"

int	    	main(void)
{
  char		*str1;

  str1 = "0123456789";
  my_printf("1  - .%s[2:6].\n"\
  	    "2  - .%s[2:6:upcase].\n"\
  	    "3  - .%s[:6].\n"\
  	    "4  - .%s[:6:upcase].\n"\
  	    "5  - .%s[2::upcase].\n"\
  	    "6  - .%s[::upcase].\n"\
  	    "7  - .%s[2:upcase].\n"\
  	    "8  - .%s[2::].\n"\
  	    "9  - .%s[2:].\n"\
  	    "10 - .%s[:6:].\n"\
	    "11 - .%s[4].\n",\
  	    str1, str1, str1, str1, str1, str1, str1, str1, str1, str1, str1);

 /* my_printf("1  - .%s[2:6].\n"\ */
  /* 	    "9  - .%s[2:].\n",\ */
  /* 	    str1, str1); */
  my_printf("0  - .0123456789.\n");
  return (0);
}
