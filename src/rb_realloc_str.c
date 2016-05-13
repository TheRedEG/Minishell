/*
** rb_realloc_str.c for rb_realloc_str in 
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Wed Apr 20 11:25:09 2016 Thomas Girolet
** Last update Wed Apr 20 11:37:54 2016 Thomas Girolet
*/

#include "minishell.h"

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
  
