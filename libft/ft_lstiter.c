/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 06:12:41 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/09 00:08:07 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
static void	f(void *content)
{
	printf("content: %s\n", (char *)content);
}

//itera en la lista.
//Aplica la funcion 'f' en el contenido de cada nodo.
int	main(void)
{
	t_list	*node1 = ft_lstnew("Hello");
	t_list	*node2 = ft_lstnew("World");

	ft_lstadd_back(&node1, node2);
	ft_lstiter(node1, f);
}*/
