#include "minishell.h"

char		*get_line(int fd)
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

/* Delete all space before command */

char		*space_before(char *str)
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
  res = rb_realloc_str(res, sizeof(char) * ((my_strlen(str) - i)));
  while (i != len)
    {
      res[x] = str[i];
      x++;
      i++;
    }
  res[x] = '\0';
  space_after(res);
}

/* Delete all space after command */

char		*space_after(char *str)
{
  int	len;
  int	i;
  char	*res;
  
  len = (my_strlen(str)-1);
  i = 0;
  while (str[len] == ' ')
    {
      len--;
    }
  len++;
  res = rb_malloc(sizeof(char) * (len));
  while (i < len)
    {
      res[i] = str[i];
      i++;
    }   
  return (res);
}
