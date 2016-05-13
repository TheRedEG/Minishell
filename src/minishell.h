#ifndef _MINISHELL_H_
#define _MINISHELL_H_

#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>

/* BASICS FUNCIONS */

void	*rb_malloc(size_t s);
void	my_putchar(char c);
void	my_putstr(char *str);
void	rb_show_word_tab(char **array);
int	my_strlen(char *str);
char	*get_line(int fd);
char	*rb_realloc_str(char *str, size_t s);
char	**rb_str_to_wordtab(char *str, char delim);

/* MINISHELL FUNCTIONS */

void	prompt();
char	**my_getenv(char **env);
char	*cpy(char *str);
char	*find_path(char **path_list, char *binaire);

/* MINISHELL BUILTINS */

void	cd_dir(char	*path);

#endif	/*_MINISHELL_H_*/
