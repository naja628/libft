#include <stddef.h>

typedef unsigned char uchar;
typedef unsigned int uint;

void *memset(void *b, int c, size_t len)
{
	uint i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = c;
		++i;
	}
	return (b);
}

void bzero(void *b, size_t n)
{
	memset(b, 0, n);
}

void *memcpy(void *dst, const void *src, size_t len)
{
	uint i;

	i = 0;
	while (i < len)
	{
		*(uchar *)(dst + i) = *(uchar *)(src + i);
		++i;
	}
	return (dst);
}

void *memmove(void *dst, const void *src, size_t n)
{
	if (dst < src)
	{
		while (n > 0)
		{
			*(uchar *)(dst + n) = *(uchar *)(dst + n);
			--n;
		}
		return (dst);
	}
	else 
		return memcpy(dst, src, n);
}

void *memchr(const void *s, int c, size_t n)
{
	uint i = 0;

	i = 0;
	while (i < n)
	{
		if (*(uchar *)(s + i) == (uchar) c)
			return (void *)(s + i);
	  ++i;
	}
	return (NULL);
}	
