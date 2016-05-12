#include "minishell.h"

int     count_word(char *str, const char delim)
{
  int   nb_word;
  int   i;
 
  nb_word = 0;
  i = -1;
  while (str[++i])
    {
      if (str[i] != delim && str[i] != '\0')
        {
          nb_word++;
          while (str[i++] != delim && str[i] != '\0');
          i--;
        }
    }
  return (nb_word);
}
 
int     count_word_s(char *str, const char delim)
{
  int   i;
 
  i = 0;
  while (str[i] != delim && str[i] != '\0')
    i++;
  return (i);
}

char	**rb_str_to_wordtab(char *str, char delim)
{
  char  **wordtab;
  int   nb_word;
  int   word_s;
  int   i[2];
  
  nb_word = count_word_s(str, delim);
  if ((wordtab = malloc((nb_word + 1) * sizeof(*wordtab))) == NULL)
    return (NULL);
  i[0] = -1;
  while (++i[0] < nb_word && *str != '\0')
    {
      while (*(str++) == delim && *str != '\0');
      word_s = count_word_s(--str, delim);
      if ((wordtab[i[0]] = malloc((word_s + 1) * sizeof(*wordtab))) == NULL)
        return (NULL);
      i[1] = 0;
      while (*str != delim && *str != '\0')
        {
          wordtab[i[0]][i[1]] = *str;
          i[1]++;
          str++;
        }
      wordtab[i[0]][i[1]] = '\0';
    }
  wordtab[i[0]] = NULL;
  return (wordtab);
}
