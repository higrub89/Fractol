/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:41:30 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/28 12:36:38 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_len);
}
/*
//copia una cadena de caracteres de una ubicacion a otra
//sin desbordarse del bufer de destino.
int	main(void)
{
	char	dst[25];
	const char	*src = "welcome to 42 Madrid!";
	size_t	dstsize = ft_strlcpy(dst, src, sizeof(dst));

	printf("Cadena copiada al string 'dst': %s\n", dst);
	printf("Longitud del string Copiado: %zu\n", dstsize);
	return (0);
}*/
