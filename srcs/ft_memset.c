#include <string.h>

void *ft_memset(void *s, int c, size_t n) {
  unsigned char *str;

  str = (unsigned char *)s;
  while (n--)
    *str++ = c;
  return (s);
}

#include <stdio.h>
int main() {
  printf("%p\n", ft_memset(0, 0, 0));
  printf("%p\n", ft_memset(0, 0, 1));
  printf("%p\n", ft_memset(0, 0, 2));
  printf("%p\n", ft_memset(0, 0, 3));
  printf("%p\n", ft_memset(0, 0, 4));
  printf("%p\n", ft_memset(0, 0, 5));
  printf("%p\n", ft_memset(0, 0, 6));
  printf("%p\n", ft_memset(0, 0, 7));
  printf("%p\n", ft_memset(0, 0, 8));
  printf("%p\n", ft_memset(0, 0, 9));
  printf("%p\n", ft_memset(0, 0, 10));
  printf("%p\n", ft_memset(0, 0, 11));
  printf("%p\n", ft_memset(0, 0, 12));
  printf("%p\n", ft_memset(0, 0, 13));
  printf("%p\n", ft_memset(0, 0, 14));
  printf("%p\n", ft_memset(0, 0, 15));
}
