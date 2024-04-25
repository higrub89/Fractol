/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:05:06 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/28 20:54:08 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	my_fun(unsigned int i, char str)
{
	printf("My inner Function: index = %d and %c\n", i, str);
	return (str - 32);
}
/*
int	main(void)
{
	char const	str[50] = "bienvenidos";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_fun);

	printf("Resultado: %s\n", result);
	free(result);
	return (0);
}*/
