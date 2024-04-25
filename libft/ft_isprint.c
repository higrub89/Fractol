/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:52:44 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/28 09:44:07 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= ' ' && i <= '~')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	a;

	a = '	';
	printf("esto es: %d\n", ft_isprint(a));
	return (0);
}*/
