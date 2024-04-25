#include "libft.h"

static void	rec_print(unsigned long n, const char *base, int *i)
{
	if (n > (unsigned long)(ft_strlen(base) - 1))
		rec_print(n / ft_strlen(base), base, i);
	ft_putchar_fd(*(base + (n % ft_strlen(base))), *i);
}

void	ft_ptr(void *format, int *i)
{
	unsigned long	n;
	const char	*base;

	n = (unsigned long)format;
	base = "0123456789abcdef";
	ft_putstr_fd("0x", *i);
	rec_print(n, base, i);
}

int	main(void)
{
	int i = 0;
	char *str = "42 MADRID";
	int *ptr = &i;

	printf("String: \n");
	ft_ptr((void *)str, &i);
	printf("\n");
		
	printf("Puntero: \n");
	ft_ptr((void *)ptr, &i);
	printf("\n");
	return (0);
}
