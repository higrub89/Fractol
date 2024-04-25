/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:03:21 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/04 01:10:07 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
//Crea un nuevo nodo de una lista simple.
int	main(void)
{
	int	data = 42;
	t_list	*new_elem;

	new_elem = ft_lstnew(&data);
	printf("Data: %d\n", *(int *)(new_elem->content));
	return (0);
}*/
