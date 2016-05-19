#include "minishell.h"

/* 1 - WELCOME */
void		welcome()
{
  my_putstr("\n\n");
  my_putstr("#############################################################\n");
  my_putstr("*                   WELCOME TO MY MINISHELL                 *\n");
  my_putstr("#############################################################\n\n");
}

/* 2 - Affiche le prompt du termianal */

void			prompt()
{
  my_putstr("\nMinishell $> ");
}
