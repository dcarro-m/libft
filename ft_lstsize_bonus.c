/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:28:34 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/02 12:45:24 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst)
	{
		i = 1;
		while (lst->next != NULL)
		{
			i++;
			lst = lst->next;
		}
	}
	return (i);
}

/*int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	*c;

	c = &a;
	a.next = &b;
	b.next = NULL;
	b.content = "Aupa";
	printf("%s\n", c->next->content);
	printf("%d\n", ft_lstsize(c));

	return (0);
}*/
