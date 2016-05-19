#include "minishell.h"

void	*rb_malloc(size_t s)
{
  void	*ptr;
  
  ptr = malloc(s);
  return (ptr);
}

char	*rb_realloc_str(char *str, size_t s)
{
  char	*tmp;
  
  tmp = malloc(my_strlen(str));
  strcpy(tmp,str);
  free(str);
  str = rb_malloc(s); 
  strcpy(str,tmp);
  return (str);
}
  
