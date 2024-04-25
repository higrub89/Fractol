/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:48:16 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/04 05:20:30 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
	{
		return (ft_strdup(""));
	}
	i = ft_strlen(s + start);
	if (i < len)
	{
		len = i;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (0);
	ft_strlcpy(p, s + start, len +1);
	return (p);
}
/*
//Toma una cadena de entrada, selecciona una subcadena
//apartir de la posicion 'start' y con longitud len.
//Devuelve una cadena que contiene la subcadena seleccionada.
int	main(void)
{
	const char	*a = "Bienvenidos a 42Madrid";
	unsigned int	b = 3;
	size_t	len = 5;

	char *sub = ft_substr(a, b, len);
	printf("Resultado: %s\n", sub);
	return (0);
}*/
