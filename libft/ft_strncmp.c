/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:44:34 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/28 14:31:03 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
//Compara dos cadenas limitada por el numero de caracter especificado.
//devuelve 0 si son iguales.
//devuelve > 0 si s1 es mayor lexicograficamente que s2.
//devuelve < 0 si s1 es menor lexicograficamente que s2.
int	main(void)
{
	const char *a = "Bienvenidos a 42 madrid";
	const char *b = "Bienvenidos amigos";
	unsigned int	result = ft_strncmp(a, b, 15);

	printf ("Result of the comparation: %d\n", result);
	return (0);
}*/
