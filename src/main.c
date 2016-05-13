#include "minishell.h"

/* Execute la cmd */

void	exec_cmd(char *path,char **tab, char **env)
{
  if (fork() == 0)
    execve(tab[0], tab, env);
  //execve()
}

/* Déplacement grace a CD */

void	cd_dir(char *path)
{
  int	a;
  
  a = chdir(path);
  if (a == -1)
  my_putstr("Bash : Aucun dossier de ce type");
}

/* WELCOME */
void	welcome()
{
  my_putstr("\n\n");
  my_putstr("#############################################################\n");
  my_putstr("*                   WELCOME TO MY MINISHELL                 *\n");
  my_putstr("#############################################################\n\n");
}

/* SECURITY */

int	security(char *str)
{
  /* Corriger le SegF sur les espace d'avant cmd */
  return (0);
}

/* Loop du minishell */

int	main(int ac, char **av, char **env)
{
  char	**tab;
  char	*cmd;
  char	**path;
  
  welcome();
  while (42)
    {
      prompt();
      cmd = get_line(0);
      if (cmd[0] != '\0')
	{
	  tab = rb_str_to_wordtab(cmd, ' ');
	  if (tab[0][0] == 'c' && tab[0][1] == 'd')
	    cd_dir(tab[1]);
	  else
	    {
	      path = my_getenv(env);
	      cmd = find_path(path,tab[0]);
	      tab[0] = cmd;
	      exec_cmd(cmd, tab ,env);
	      wait(NULL);
	    }
	}
      else
	wait(NULL);
    }
  return (0);
}

