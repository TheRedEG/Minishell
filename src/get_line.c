#include "minishell.h"
#include <stdio.h>

char	*get_line(int fd)
{
  int	nread;
  char	*buffer;
  char	tmp[1];
  int	i;
  
  buffer = rb_malloc(sizeof(char));
  buffer[0] = '\0';
  i = 0;
  tmp[0] = '\0';
  while (tmp[0] != '\n')
    {
      nread = read(fd,tmp,1);
      if (tmp[0] != '\n')
	{
	  buffer[i] = tmp[0];
	  buffer = rb_realloc_str(buffer, sizeof(char) * ((my_strlen(buffer) + 1)));
	  i++;
	}
    }
  return(buffer);
}
