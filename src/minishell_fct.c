#include "minishell.h"

/* Affiche le prompt du termianal */

void			prompt()
{
  my_putstr("\nMinishell $> ");
}

/* Creer le PATH finale */

char			*find_path(char **path_list, char *binaire)
{
  char	*path;
  char	*buf;
  int	i;
  int	rval;
  char	*bin;
  
  bin = malloc(sizeof (bin)*(strlen(binaire)+1));
  bin[0]= '/';
  bin = strcat(bin,binaire);
  i = 0;
  while (path_list[i])
    {
      buf = path_list[i];
      path = strcat(buf , bin);
      rval = access(path, F_OK);
      if (rval == 0)
	  return (path);
      if (rval == -1)
	i++;
    }
}

/* Recoupe les PATH dispo */

char			*cpy(char *str)
{
  char	*result;
  int	i;
  int	len;
  
  i = 5;
  len = strlen(str)-5;
  result = malloc(sizeof (result) * (len));
  while (str[i] != '\0')
    {
      result[i-5]=str[i];
      i++;
    }
  return (result);
}

/* Recupere char PATH possible */

char			**my_getenv(char **env)
{
  int	i;
  char	*buf;
  char	*test;
  char  **res;

  i = 0;
  while (env[i])
    {
      if (env[i][0] == 'P' && env[i][1] == 'A')
	{
	  buf = env[i];
	}
      i++;
    }
  test = cpy(buf);
  res = rb_str_to_wordtab(test, ':');
  return(res);

}
