#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	a;

	a = c;
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
