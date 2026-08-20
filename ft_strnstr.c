#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len) {
  size_t i, j;
  char *p;

  if (!big || !little)
    return NULL;

  i = 0;
  while (big[i]) {
    j = 0;
    p = (char *)little;
    while (p[j]) {
      if (big[i + j] != p[j])
        break;
      j++;
    }
    if (!p[j])
      return (char *)big + i;
    i++;
  }
  return NULL;
}
