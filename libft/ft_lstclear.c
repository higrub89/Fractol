/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 05:56:11 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/09 00:43:20 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*tmp;

	if (!lst || !del || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
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
//Elimina y libera el nodo 'lst' y todos los consecutivos.
//el puntero a la lista debe ser NULL.
int	main(void)
{
	char	*str1 = ft_strdup("nodo numero 1");
	char	*str2 = ft_strdup("nodo numero 2");
	char	*str3 = ft_strdup("nodo numero 3");

	t_list	*node1 = ft_lstnew(str1);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);

	printf("Lista Antes:\n");
	ft_lstprint(node1);

	ft_lstclear(&node1, free);

	printf("Lista Borrada:\n");
	ft_lstprint(node1);

}*/
