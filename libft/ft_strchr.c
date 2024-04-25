/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:43:43 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/28 18:14:12 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
/*
//Busca la primera aparicion de un caracter en una cadena.
//devuelve un puntero al primer caracter que coincide con el buscado.
int main(void)
{
	const char *str = "Bienvenidos";
	char buscar = 'e';
	char *result = ft_strchr(str, buscar);

	printf("String de Busqueda: %s\n", str);
	printf("Primera aparicion de la letra 'e': %s\n", result);
	return (0);
}*/
