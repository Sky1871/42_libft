#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
  size_t len;

  len = ft_strlen(s1) + ft_strlen(s2);
  char *ret = malloc(sizeof(char) * (len + 1));
  ft_memcpy(ret, s1, ft_strlen(s1));
  ft_memcpy(ret + ft_strlen(s1), s2, ft_strlen(s2));
  ret[len] = '\0';
  return (ret);
}
