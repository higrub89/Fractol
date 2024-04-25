/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 22:11:18 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/11 13:07:25 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	ft_countwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s = s + ft_wordlen(s, c);
		}
		else
			s++;
	}
	return (count);
}

static void	*free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i++]);
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;
	int		i;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = NULL;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str[i] = ft_substr(s, 0, ft_wordlen(s, c));
			if (!str[i++])
				return (free_str(str));
			s += ft_wordlen(s, c);
		}
		else
			s++;
	}
	return (str);
}
/*
//Divide una cadena en subcadenas basandose en un delimitador.
//ft_countwords cantidad de palabras
//ft_wordlen longitud de cada cadena de entrada.
//ft_substr extraer cada palabra y alamcenarla en una subcadena resultante.
//Imprime cada subcadena en una linea nueva.
int	main(void)
{
	char const *s = "Bienvenidos a 42 madrid";
	char **result = ft_split(s, ' ');

	if (result)
	{
		int	i;

		i = 0;
		while (result[i])
		{
			printf("Palabra %d: %s\n", i + 1, result[i]);
			i++;
		}
		free_str(result);
	}
	return (0);
}*/
