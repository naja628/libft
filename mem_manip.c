#include <stddef.h>

typedef unsigned char uchar;
typedef unsigned int uint;

void *ft_memset(void *b, int c, size_t len)
{
	uint i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)b + i = c;
		++i;
	}
	return (b);
}

void ft_bzero(void *b, size_t n)
{
	ft_memset(b, 0, n);
}

void *ft_memcpy(void *dst, const void *src, size_t len)
{
	uint i;

	i = 0;
	while (i < len)
	{
		*(uchar *)dst + i = *(uchar *)src + i;
		++i;
	}
	return (dst);
}

void *ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst > src)
	{
		while (n > 0)
		{
			*(uchar *)dst + n - 1 = *(uchar *)src + n - 1;
			--n;
		}
		return (dst);
	}
	else 
		return ft_memcpy(dst, src, n);
}

void *ft_memchr(const void *s, int c, size_t n)
{
	uint i = 0;

	i = 0;
	while (i < n)
	{
		if (*(uchar *)s + i == (uchar) c)
			return ((void *)s + i);
	  ++i;
	}
	return (NULL);
}	
