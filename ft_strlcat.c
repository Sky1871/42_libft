#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	ld;
	size_t	ls;

	i = ft_strlen(dst);
	n = 0;
	ld = i;
	ls = ft_strlen(src);
	if (size <= ld)
		return (size + ls);
	while (src[n] != '\0' && i < size - 1)
	{
		dst[i] = src[n];
		i++;
		n++;
	}
	dst[i] = '\0';
	return (ld + ls);
}
