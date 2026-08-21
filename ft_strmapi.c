#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
  char *ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
  int i = 0;
  while (s[i]) {
    ret[i] = f(i, s[i]);
    i++;
  }
  ret[i] = '\0';
  return (ret);
}
