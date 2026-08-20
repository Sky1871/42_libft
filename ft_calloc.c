#include "libft.h"

void *ft_calloc(size_t count, size_t size) {
  void *p;
  size_t total;

  total = count * size;
  if (count == 0 && (total / count) != size)
    return (NULL);
  if ((p = malloc(count * size)) == NULL)
    return (NULL);
  ft_memset(p, 0, count * size);
  return (p);
}
