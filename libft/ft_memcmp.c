/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:47:57 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/04 17:18:31 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return ((int)(unsigned char)p1[i] - (int)(unsigned char)p2[i]);
		}
		i++;
	}
	return (0);
}
/*
//compara los n bytes de os bloques de memoria.
//devuelve Positivo o Negativo si son mayores o menores.
#include <string.h>
int	main(void)
{
	const char	*a = "Bienvenidos am 42madrid";
	const char	*b = "Bienvenidos a cursus";
	int	cmp = ft_memcmp(a, b, 14);
	printf("result: %d\n", memcmp(a, b, 14));

	printf("El resultado es: %d\n", cmp);
	return (0);
}*/
