/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:20:10 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/04 20:12:32 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ft_bzero(p, (count * size));
	return (p);
}
/*
//Asigna dinamicamente memoria para un numero especifico de elementos.
//inicializa la memoria a 0.
//Devuelve un puntero a la memoria asignada.
int	main(void)
{
	size_t	count = 10;
	size_t	size = sizeof(int);
	int	*vec = (int *)ft_calloc(count, size);
	int	*vec2 = (int *)calloc(count, size);
	for (int i = 0; i < 10; i++)
	printf("Resultado: %d\n", vec[i]);
	printf("Resultado: %d\n", *vec2);
	return (0);
}*/
