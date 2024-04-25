/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:04:19 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/03 21:08:02 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list	*existingNode = ft_lstnew("Nodo existente");

	t_list *newNode = ft_lstnew("Nuevo nodo");

	ft_lstadd_front(&existingNode, newNode);

	printf("Resultado: %s\n", (char *)(newNode->content));
	return (0);
}*/
