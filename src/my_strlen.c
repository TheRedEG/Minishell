/*
** my_strlen.c for my_strlen in 
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Mon Apr 18 14:41:35 2016 Thomas Girolet
** Last update Tue Apr 19 13:03:08 2016 Thomas Girolet
*/

#include "minishell.h"

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
