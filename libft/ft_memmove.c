/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:17:16 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/04 16:42:08 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (src <= dest && dest <= src + len)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dest);
}
/*
//copia un bloque de memoria de una ubicacion a otra.
//las dos cadenas pueden superponerse.
int	main(void)
{
	char	src[] = "Bienvenidos a";
	char	dst[20];

	ft_memmove(dst, src, 5);
	printf("Copia el string normal: %s\n", dst);

	ft_memmove(src + 3, src, 10);
	printf("String superpuesto: %s\n", src);

	int	source[10] = {1,2,3,4,5,6,7,8,9,10};
	int	destination[10];

	ft_memmove(destination, source, sizeof(int) * 10);
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("Resut2: [%d]=%d\n", i, (int)destination[i]);
			i++;
	}
	return (0);
}*/
