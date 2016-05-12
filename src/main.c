#include "minishell.h"

void	exec_cmd(char *path,char **tab, char **env)
{
  if (fork() == 0)
    execve(tab[0], tab, env);
  //execve()
}

int	main(int ac, char **av, char **env)
{
  char	**tab;
  char	*cmd;
  char	**path;
  
  while (42)
    {
      prompt();
      cmd = get_line(0);
      tab = rb_str_to_wordtab(cmd, ' ');
      path = my_getenv(env);
      cmd = find_path(path,tab[0]);
      tab[0] = cmd;
      exec_cmd(cmd, tab ,env);
      wait(NULL);
    }
  return (0);
}
