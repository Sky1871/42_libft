#include "libft.h"

static size_t ft_len(const char *s) {
  size_t i;

  i = 0;
  while (s[i] != '\0')
    i++;
  return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size) {
  size_t i;
  size_t n;
  size_t ld;
  size_t ls;

  i = ft_len(dst);
  n = 0;
  ld = i;
  ls = ft_len(src);
  if (size <= ld)
    return (size + ls);
  while (src[n] != '\0' && i < size - 1) {
    dst[i] = src[n];
    i++;
    n++;
  }
  dst[i] = '\0';
  return (ld + ls);
}
