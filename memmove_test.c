#include <stdio.h>
void *ft_memmove(void *dst, const void * src, size_t n);

int main()
{
	char buffer[14] = "xxxxxbonjour";
	void *p = buffer;
	printf("%p %p\n", p+1, p);
	ft_memmove(buffer, buffer + 5, 7);
	printf("%s\n", buffer);
}
		
