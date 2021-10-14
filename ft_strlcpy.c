#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t sz)
{
	size_t	count;

	count = 0;
	while (count + 1 < sz && *src)
	{
		*(dest++) = *(src++);
		++count;
	}
	if (sz != 0)
		*dest = '\0';
	while (*src)
	{
		++src;
		++count;
	}
	return (count);
}
