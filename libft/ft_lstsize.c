/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:35:27 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/30 23:09:01 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
//Cueta el numero de Nodos de una lista.
int	main(void)
{
	t_list	*ls = ft_lstnew("longitud de la lista");
	t_list	*new = ft_lstnew("Nuevo Nodo");
	ft_lstadd_front(&ls, new);
	int	size = ft_lstsize(ls);
	printf("La longitus es: %d\n", size);
	return (0);
}*/
