/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:48:05 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/02 12:44:57 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main()
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	lst = NULL;
	node1 = ft_lstnew("Pájaro");
	node2 = ft_lstnew("locuelo");
	node3 = ft_lstnew("azul");
	ft_lstadd_front(&lst, node1);
	printf("%s \n", lst->content);
	printf("%s \n", node1->content);
	ft_lstadd_front(&lst, node2);
	printf("%s \n", lst->content);
	printf("%s \n", node2->content);
	ft_lstadd_front(&lst, node3);
	printf("%s \n", lst->content);
	printf("%s \n", node3->content);
}*/
