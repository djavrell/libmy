#include 	"../include/my.h"

/**
 * @param  s str
 * @param  b beg => the start's char to count
 * @param  e end => the end's char
 * @return   int => number of octet fot the malloc
 */

int			check_len(char *s, int b, int e)
{
  int 	l;

  return ((e < b) ? 0 : (((e > (l = my_strlen(s))) ? l : e) - b));
}

/*
  if (end < beg)
    return (0);
  else
    {
      len = my_strlen(src);
      if (end > len)
        return (len - beg);
      else
       	return (end - beg);
    }
*/
