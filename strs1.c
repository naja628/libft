#include <stddef.h>

size_t ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

size_t ft_strlcpy(char *dest, const char *src, size_t sz)
{
	size_t count;

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
	// should include '\0'??
}

size_t ft_strlcat(char *dest, const char *src, size_t sz)
{
	size_t count;

	count = 0;
	while (count < sz && *dest)
	{
		++dest;
		++count;
	}
	if (count == sz)  
		return (count);
	while (count + 1 < sz && *src)
	{
		*(dest++) = *(src++);
		++count;
	}
	*dest = '\0';
	while (*src)
	{
		++src;
		++count;
	}
	return (count);
}

char *ft_strchr(const char *s, int c)
{
	while (*s != c && *s)
		++s;
	if (*s == 0)
		return (NULL);
	return ((char *) s);
}

char *ft_strrchr(const char *s, int c)
{
	char *last_instance;

	last_instance = NULL;
	while (*s)
	{
		if (*s == c)
			last_instance = (char *) s;
		++s;
	}
	return (last_instance);
}
