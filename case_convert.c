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
