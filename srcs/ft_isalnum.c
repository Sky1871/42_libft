int	ft_isalnum(int c)
{
	unsigned char	a;

	a = c;
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("a: %d = %d\n", ft_isalnum('a'), isalnum('a'));
	printf("z: %d = %d\n", ft_isalnum('z'), isalnum('z'));
	printf("A: %d = %d\n", ft_isalnum('A'), isalnum('A'));
	printf("Z: %d = %d\n", ft_isalnum('Z'), isalnum('Z'));
	printf("5: %d = %d\n", ft_isalnum('5'), isalnum('5'));
	printf("[: %d = %d\n", ft_isalnum('['), isalnum('['));
}
*/
