#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
  const unsigned char *t;

  if (!s)
    return (0);
  t = (const unsigned char *)s;
  while (n-- > 0) {
    if (*t == (unsigned char)c)
      return ((void *)t);
    t++;
  }
  return (0);
}
