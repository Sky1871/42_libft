#include "libft.h"

int ft_isprint(int c) {
  if (c >= 32 && c <= 126)
    return 1;
  return 0;
}

#include <stdio.h>
int main() {
  printf("%d\n", ft_isprint(32));
  printf("%d\n", ft_isprint(126));
  printf("%d\n", ft_isprint(0));
  printf("%d\n", ft_isprint(10));
  return 0;
}
