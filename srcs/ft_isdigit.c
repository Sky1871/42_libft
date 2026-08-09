int	ft_isdigit(int c)
{
	unsigned char	a;

	a = c;
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("1: %d = %d\n", ft_isdigit('1'), isdigit('1'));
	printf("5: %d = %d\n", ft_isdigit('5'), isdigit('5'));
	printf("9: %d = %d\n", ft_isdigit('9'), isdigit('9'));
	printf("Z: %d = %d\n", ft_isdigit('Z'), isdigit('Z'));
	printf("@: %d = %d\n", ft_isdigit('@'), isdigit('@'));
	printf("[: %d = %d\n", ft_isdigit('['), isdigit('['));
}
*/
