#include "minishell.h"

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
  space_before(buffer);
}

char	*space_before(char *str)
{
  int	i;
  int	x;
  int	len;
  char	*res;
  
  i = 0;
  x = 0;
  len = my_strlen(str);
  while (str[i] == ' ')
    {
      i++;
    }
  res = rb_realloc_str(res, sizeof(char) * ((strlen(str) - i)));
  while (i != len)
    {
      res[x] = str[i];
      x++;
      i++;
    }
  res[x] = '\0';
  return (res);
}
