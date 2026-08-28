#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t;

	if (!s)
		return (NULL);
	t = (const unsigned char *)s;
	while (n-- > 0)
	{
		if (*t == (unsigned char)c)
			return ((void *)t);
		t++;
	}
	return (NULL);
}
