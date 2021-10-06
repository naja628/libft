typedef unsigned int uint;

void ft_putchar_fd(char c, int fd);

static uint ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else 
		return (n);
}

static void ft_putnbr_helper(uint n, int fd)
{
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else 
	{
		ft_putnbr_helper(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void ft_putnbr_fd(int n, int fd)
{
	uint abs;

	abs = ft_abs(n);
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_putnbr_helper(abs, fd);
}
