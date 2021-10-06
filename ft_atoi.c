int ft_isdigit(int c);

int ft_atoi(const char *s)
{
	int 	sign;
	int 	acc;

	while (('\t' <= *s && *s <= '\r') || *s == ' ')
		++s;
	sign = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		++s;
	}
	acc = 0;
	while (ft_isdigit(*s))
	{
		acc *= 10;
		acc += *s - '0';
		++s;
	}
	return (sign * acc);
}
