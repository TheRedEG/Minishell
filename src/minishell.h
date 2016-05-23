#ifndef _MINISHELL_H_
#define _MINISHELL_H_

#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>

/* BASICS FUNCIONS */

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
char	*get_line(int fd);
char	*space_before(char *str);

/* WORDTAB */

void	rb_show_word_tab(char **array);
char	**rb_str_to_wordtab(char *str, char delim);

/* ALLOC */

void	*rb_malloc(size_t s);
char	*rb_realloc_str(char *str, size_t s);

/* MINISHELL CMD */

char	*find_path(char **path_list, char *binaire);
char	*cpy(char *str);
char	**my_getenv(char **env);

/* MINISHELL DISPLAY */

void	welcome();
void	prompt();

/* MINISHELL BUILTINS */

void	cd_dir(char	*path);

/* SECURITY */


#endif	/*_MINISHELL_H_*/
