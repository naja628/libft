#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n != 0 && *s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
		--n;
	}
	if (n != 0)
		return (*s1 - *s2);
	else
		return (0);
}

char *ft_strnstr(const char* s, const char *to_find, size_t n)
{
	unsigned int i;

	if (*to_find == '\0')
		return ((char *) s);
	while (*s && n > 0 && *to_find != *s)
	{
		--n;
		++s;
	}
	if (*s == '\0' || n == 0)
		return (NULL);
	i = 1;
	while (s[i] && to_find[i] && n - i > 0 && to_find[i] == s[i])
		++i;
	if (to_find[i] == '\0')
		return ((char *) s);
	else
		return (ft_strnstr(s + 1, to_find, n - 1));
}

#include <stdlib.h>

size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dest, const char *src, size_t sz);

char *ft_strdup(const char *s)
{
	size_t n;
	char *dup;

	n = ft_strlen(s);
	dup = malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, n + 1);
	return (dup);
}

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char *sub;
	size_t s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	if (len == 0)
		*sub = '\0';
	else
		ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

size_t ft_strlcat(char *dest, const char * src, size_t sz);

/* note : using strlcat makes us unnecessarily pass through s1 twice
 * but I don't care */
char *ft_strjoin(char const *s1, char const *s2)
{
	char *concat;
	size_t sz;

	sz = ft_strlen(s1) + ft_strlen(s2) + 1;
	concat = malloc(sizeof(char) * sz);
	if (!concat)
		return (NULL);
	ft_strlcpy(concat, s1, sz);
	ft_strlcat(concat, s2, sz);
	return (concat);
}
