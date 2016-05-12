/*
** rb_malloc.c for rb_malloc in 
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Wed Apr 20 10:14:39 2016 Thomas Girolet
** Last update Wed Apr 20 10:40:59 2016 Thomas Girolet
*/

#include <stdlib.h>
#include "minishell.h"

void	*rb_malloc(size_t s)
{
  void	*ptr;
  
  ptr = malloc(s);
  return (ptr);
}


