/*
** my_putchar.c for my_putchar in 
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Mon Apr 18 14:33:10 2016 Thomas Girolet
** Last update Tue Apr 19 13:02:08 2016 Thomas Girolet
*/

#include "minishell.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
