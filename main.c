#include	"my.h"

int	    	main(void)
{
  char		*str1;
  char		*str2;
  int		nb1;
  int		nb2;
  long		t;

  str1 = "une chaine !!!";
  str2 = "une autre chaine";
  nb1 = -12345;
  nb2 = 1548;
  t = 54321;
  my_printf("my_printf: \"toto %ld[01] %s[2.5] titi %s tutu %d[0123] %d\"\n",\
  	    t, str1, str2, nb1, nb2);
  my_fprintf(2, "my_fprintf(2): \"toto %s[2.5] titi %s tutu %d[0123] %d\"\n", \
	    str1, str2, nb1, nb2);
  my_printf("my_fcat: \"%s\"\n", my_fcat("toto %s[2.5] %s %d %d", str1, str2,
				      nb1, nb2));
  return (0);
}
