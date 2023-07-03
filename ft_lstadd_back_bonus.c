/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:55:25 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/05 12:55:55 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(temp);
	temp->next = new;
}

/*int	main()
{
	t_list	*new;
	t_list	*lst;

	lst = ft_lstnew("Welcome");
	lst->next = ft_lstnew("Mr");
	new = ft_lstnew("Marshall");
	ft_lstadd_back(&lst, new);
	printf("%s \n", ft_lstlast(lst)->content);
	free(new), free(lst->next), free(lst);
}*/
