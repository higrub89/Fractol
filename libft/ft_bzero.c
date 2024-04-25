/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:47:19 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/04 20:00:37 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = 0;
	}
}

/*
//se utiliza para establecer en cero los primeros n bytes
//de memoria a los que apunta el puntero s.
int	main(void)
{
	char	str[50] = "";

	size_t n = sizeof(str);

	ft_bzero(str, n);

	printf("Resultado: %s\n", str);
	return (0);
}*/
