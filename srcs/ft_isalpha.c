int	ft_isalpha(int c)
{
	unsigned char	a;

	a = c;
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("a: %d = %d\n", ft_isalpha('a'), isalpha('a'));
	printf("z: %d = %d\n", ft_isalpha('z'), isalpha('z'));
	printf("A: %d = %d\n", ft_isalpha('A'), isalpha('A'));
	printf("Z: %d = %d\n", ft_isalpha('Z'), isalpha('Z'));
	printf("@: %d = %d\n", ft_isalpha('@'), isalpha('@'));
	printf("[: %d = %d\n", ft_isalpha('['), isalpha('['));
}
*/
