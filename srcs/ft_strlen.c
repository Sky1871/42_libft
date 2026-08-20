#include <string.h>

size_t ft_strlen(const char *s) {
  size_t len;

  len = 0;
  while (s[len])
    len++;
  return (len);
}

#include <stdio.h>
int main(void) {
  printf("%zu\n", ft_strlen("Hello World!"));
  printf("%zu\n", ft_strlen(""));
  printf("%zu\n", ft_strlen(NULL));
  return (0);
}
