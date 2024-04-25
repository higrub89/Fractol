/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 05:11:45 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/31 20:28:37 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
/*
//Devuelve el ultimo nodo de la lista.
int	main(void)
{
	t_list	*node1 = ft_lstnew("Nodo 1");
	t_list	*node2 = ft_lstnew("Nodo 2");
	t_list	*node3 = ft_lstnew("Nodo 3");

	ft_lstadd_front(&node2, node1);
	ft_lstadd_front(&node3, node2);

	t_list	*lastNode = ft_lstlast(node3);

	printf("Ultimo nodo de la lista: %s\n", (char *)(lastNode->content));
	return (0);
}*/
