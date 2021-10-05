#include<stddef.h>

typedef unsigned char uchar;
typedef unsigned int uint;

void *ft_memset(void *b, int c, size_t len)
{
	uint i;

	i = 0;
	while (i < len)
	{
		*((uchar *)b + i) = c;
		++i;
	}
	return (b);
}

void ft_bzero(void *b, size_t n)
{
	ft_memset(b, 0, n);
}

#include<stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	void *p;

	p = malloc(size * count);
	if (!p)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}
