/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:58:20 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/28 18:03:12 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = s1_len + s2_len;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	ft_memcpy(result, s1, s1_len);
	ft_memcpy(result + s1_len, s2, s2_len);
	result[i] = '\0';
	return (result);
}
/*
//Concatena dos strings en una nueva strig dinamicamente asiganda.
//Devuelve un puntero a esa cadena Resultante.
int	main(void)
{
	char const	*a = "Bienvenidos ";
	char const	*b = "A 42 MADRID";
	char	*Res = ft_strjoin(a, b);

	printf("Cadena concatenada: %s\n", Res);
	return (0);
}*/
