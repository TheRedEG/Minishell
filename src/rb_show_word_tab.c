#include "minishell.h"

int	rb_strarraylen(char **array)
{
  int	x;
  
  x = 0;
  while (array[x] != NULL)
    {
      x++;
    }
  return (x);
}

void	rb_show_word_tab(char **array)
{
  int	x;
  
  x = 0;
  while (x != rb_strarraylen(array))
    {
      my_putstr(array[x]);
      my_putchar('\n');
      x++;
    }
}
