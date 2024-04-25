#include "libft.h"

void	ft_hexa(unsigned long n, int *i, int uppercase)
{
	unsigned int	num;
	char		*base;
	size_t		len_b;

	num = (unsigned int)n;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	len_b = ft_strlen(base);
	if (num >= (len_b - 1))
	{
		ft_hexa(num / len_b, i, uppercase);
	}
	ft_putchar_fd(*(base + (num % len_b)), *i);
}
/*
int main(void)
{
	int i = 0;
	unsigned long num = 255;
	
	printf("UPPERCASE: \n" );
	ft_hexa(num, &i, 1);
	printf("\n");	
	
	i = 0;
	printf("lowcase: \n" );
	ft_hexa(num, &i, 0);
	printf("\n");
	
	return (0);
}*/
