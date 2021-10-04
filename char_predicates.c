int ft_isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else 
		return (0);
}

int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int ft_isascii(int c)
{
	if (0 <= c && c < 128)
		return (1);
	else 
		return (0);
}

int ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (1);
	else 
		return (0);
}
