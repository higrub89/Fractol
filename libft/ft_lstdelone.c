/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 05:50:05 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/09 00:43:36 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (lst && del)
	{
		del(lst->content);
		free (lst);
	}
}
/*
void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)(lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	char *str3 = ft_strdup("Nodo numero 3");
	char *str2 = ft_strdup("Nodo numero 2");
	char *str1 = ft_strdup("Nodo numero 1");

	t_list	*node1 = ft_lstnew(str3);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str1);

	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);
	printf("Lista Antes:\n");

	ft_lstprint(node1);

	ft_lstdelone(node3, free);

	printf("Lista Despues:\n");
	ft_lstprint(node1);
	return (0);
}*/
