#include <stdlib.h>

static uint ft_abs (int n)
{
	if (n < 0)
		return (-n);
	else 
		return (n);
}

static size_t ft_writing_sz(int n)
{
	size_t count;
	uint abs;

	count = 1;
	abs = ft_abs(n);
	if (n < 0)
		++count;
	while (abs >= 10)
	{
		++count;
		abs /= 10;
	}
	return (count);
}

static char* ft_itoa_helper(uint n, char *units_place)
{
	if (n < 10)
	{
		*units_place = n + '0';
		return (units_place);
	}
	*units_place = n % 10 + '0';
	return (ft_itoa_helper(n / 10, units_place - 1));
}

char *ft_itoa(int n)
{
	size_t sz;
	uint abs;
	char *written_num;

	sz = ft_writing_sz(n);
	abs = ft_abs(n);
	written_num = malloc(sizeof(char) * (sz + 1));
	if (!written_num)
		return (NULL);
	if (n < 0)
		*written_num = '-';
	ft_itoa_helper(abs, written_num + sz - 1);
	written_num[sz] = '\0';
	return (written_num);
}
