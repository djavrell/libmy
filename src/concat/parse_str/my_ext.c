#include 	"my.h"

t_ext		*tab_ext(void)
{
  static t_ext	tab[] =
    {
      {"b", 0, "01", &ret_nbr_base},
      {"o", 0, "01234567", &ret_nbr_base},
      {"d", 0, "0123456789", &ret_nbr_base},
      {"x", 0, "0123456789abcdef", &ret_nbr_base},
      {"X", 0, "0123456789ABCDEF", &ret_nbr_base},
      {"p", 0, "0123456789abcdef", &ret_us_nbr_base},
      {"u", 0, "0123456789", &ret_us_nbr_base},
      {"s", 0, NULL, &ret_str},
      {"c", 0, NULL, &ret_char},
      {"ld", 1, "0123456789", &ret_lg_nbr_base},
      {NULL, -1, NULL, NULL}
    };
  return (tab);
}
