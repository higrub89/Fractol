/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 06:18:32 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/11 13:16:21 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*new_lst;
	t_list	*new_nodo;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_nodo = ft_lstnew(content);
		if (!new_nodo)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_nodo);
		lst = lst->next;
	}
	return (new_lst);
}

void	*f(void *content)
{
	char	*str;

	str = (char *)content;
	str = ft_strdup(str);
	return (str);
}
/*
void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		printf("content: %s\n", (char *)(lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*node1 = ft_lstnew("nodo numero 1");
	t_list	*node2 = ft_lstnew("nodo numero 2");

	ft_lstadd_back(&node1, node2);
	printf("Lista Original:\n");
	ft_lstprint(node1);

	t_list	*new_lst = ft_lstmap(node1, f, free);
	printf("Lista Copiadaa:\n");
	ft_lstprint(new_lst);

	ft_lstclear(&new_lst, free);
}*/
