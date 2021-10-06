void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		++i;
	}
}

#include <stdlib.h>

size_t ft_strlen(const char *s);

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char *image;
	unsigned int i;

	image = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!image)
		return (NULL);
	i = 0;
	while (s[i])
	{
		image[i] = f(i, s[i]);
		++i;
	}
	image[i] = '\0';
	return (image);
}

