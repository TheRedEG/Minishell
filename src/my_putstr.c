/*
** my_putstr.c for my_putstr in 
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Mon Apr 18 14:36:51 2016 Thomas Girolet
** Last update Tue Apr 19 13:02:19 2016 Thomas Girolet
*/

#include "minishell.h"

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
