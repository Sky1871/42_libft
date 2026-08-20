#include "libft.h"

size_t ft_strlen(const char *s) {
  size_t len;

  len = 0;
  while (s[len])
    len++;
  return (len);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  printf("%zu | %zu\n", ft_strlen("Hello World!"), strlen("Hello World!"));
  printf("%zu | %zu\n", ft_strlen(""), strlen(""));
  printf("%zu | %zu\n", ft_strlen(NULL), strlen(NULL));
  return (0);
}
*/
