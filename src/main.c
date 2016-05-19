#include "minishell.h"

/* 1 - Execute la cmd */

void		exec_cmd(char *path,char **tab, char **env)
{
  if (fork() == 0)
    execve(tab[0], tab, env);
}

/* 2 - Commande CHDIR */

void		cd_dir(char *path)
{
  int	a;
  
  a = chdir(path);
  if (a == -1)
  my_putstr("Bash : Aucun dossier de ce type");
}

/* 3 - WELCOME */
void		welcome()
{
  my_putstr("\n\n");
  my_putstr("#############################################################\n");
  my_putstr("*                   WELCOME TO MY MINISHELL                 *\n");
  my_putstr("#############################################################\n\n");
}

int		exit_prog(char *str)
{
  int	i;
  
  i = 0;
  if (str[0] == 'e' && str[1] == 'x')
    i++;
  if (str[2] == 'i' && str[3] == 't')
    i++;
  return (i);
}

/* 4 - Découpe l'input user + exit */

char		**get_command()
{
  char	*cmd;
  char	**tab;
  
  cmd = get_line(0);
  if (cmd[0] != '\0')
    {
      tab = rb_str_to_wordtab(cmd, ' ');
      if (exit_prog(tab[0]) == 2)
	exit(0);
    }    
  return (tab);
}
  
/* 5 - Loop du minishell */

int		main(int ac, char **av, char **env)
{
  char	**tab;
  char	**path;
  char	*cmd;
  
  welcome();
  while (42)
    {
      prompt();
      tab = get_command();
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
  return (0);
}
  
