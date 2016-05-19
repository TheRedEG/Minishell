#include "minishell.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;
  
  i = 0;
  while(str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
