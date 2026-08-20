#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
  char *d = (char *)dest;
  const char *s = (const char *)src;

  if (d < s) {
    while (n--) {
      *d++ = *s++;
    }
  }
}
