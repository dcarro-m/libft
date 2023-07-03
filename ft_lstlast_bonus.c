/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:52:19 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/05 12:29:54 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main()
{
	t_list	*lst;
	t_list	*end;

	lst = ft_lstnew("Hola");
	lst->next = ft_lstnew("Como te");
	lst->next->next = ft_lstnew("lo montas");
	end = ft_lstlast(lst);
	printf("%s \n", end->content);
	free(lst->next->next), free(lst->next), free(lst);
}*/
