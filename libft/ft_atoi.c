/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 23:03:48 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/04 17:23:54 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	r;
	long	s;
	int		i;

	r = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return ((int)(r * s));
}
/*
//convierte una cadena de caracteres en entero.
//caracteres no numericos excepto un signo al inicio devuelve 0.
int main(void)
{
	const char *b = "4748364";
	int res = ft_atoi(b);

	printf("Resultado: %d\n", res);
	printf("Verdadero atoi: %d\n", atoi(b));
	return (0);
}*/
