/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:59:37 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/04 17:21:55 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0'
			&& haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
/*
//localiza la primera aparicion de una subcadena en una cadena.
//Tiene un limite en la cantidad de caracteres que busca.
//Devuelve un puntero en la primera aparicion de la subcadena.
int main(void)
{
	char const *a = "Bienvenidos a 42 Madrid";
	char *b = "en";
	char *result = ft_strnstr(a, b, 10);

	printf("Buscamos: '%s'\n en str: '%s'\n Resul: %s\n", b, a, result);
	return (0);
}*/
