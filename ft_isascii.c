#include "libft.h"

int ft_isascii(int c) {
  if (c >= 0 && c <= 127)
    return (1);
  return (0);
}

/*
#include <stdio.h>
int main() {
  printf("%d\n", ft_isascii(0));
  printf("%d\n", ft_isascii(127));
  printf("%d\n", ft_isascii(-1));
  printf("%d\n", ft_isascii(255));
  return (0);
}
*/
