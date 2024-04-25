/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:44:42 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/28 18:50:08 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	size;

	if (!s1)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[len]) && len)
		len--;
	size = len - i;
	return (ft_substr(s1, i, size + 1));
}
/*
//Elimina los caracteres de espacio al princio y al final.
//Devuelve la cadena sin esos caracteres de espacio.
int	main(void)
{
	char const *str = "	Hola Bienvenidos a 42 madrid!	";
	char const *set = " \t\n";
	char *result = ft_strtrim(str, set);

	printf("Original: \"%s\"\n", str);
	printf("String Sin espacios: \"%s\"\n", result);
	free (result);
	return (0);
}*/
