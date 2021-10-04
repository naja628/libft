int ft_tolower(int c)
{
	int diff = 'a' - 'A';

	if ('A' <= c && c <= 'Z')
		return (c + diff);
	else 
		return (c);
}

int ft_toupper(int c)
{
	int diff = 'A' - 'a';

	if ('a' <= c && c <= 'z')
		return (c + diff);
	else 
		return (c);
}

//testing 
#include <stdio.h>

int main()
{
	char c = 'c', C ='C', one = '1';

	printf("tolower c C 1: %c %c %c\n", ft_tolower(c), ft_tolower(C), ft_tolower(one));
	printf("toupper c C 1: %c %c %c\n", ft_toupper(c), ft_toupper(C), ft_toupper(one));
	return (0);
}
