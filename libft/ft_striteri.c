/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:33:57 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/09 00:04:51 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	my_func(unsigned int i, char *s)
{
	printf("My Inner function: index = %i and the String is %s\n", i, s);
}

//Recorre cada caracter del string.
//llama la funcion f dando commo parametros el indice de cada carater en s. 
int main(void)
{
	char	str[25] = "Bienvenidos a 42 Madrid! ";
	printf("%s\n", str);
	ft_striteri(str, my_func);
	return (0);
}*/
