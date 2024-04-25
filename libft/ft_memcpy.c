/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:22:32 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/28 11:01:46 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
//Se utiliza para copiar un bloque de memoria
//Desde una ubicacion de origen a una de destino.
int	main(void)
{
	char *src = "Bienvenidos a 42Madrid";
	char dest[25];

	ft_memcpy(dest, src, 10);
	dest[10] = '\0'; 

	printf("Cadena copiada: %s\n", dest);
	return (0);
}*/
