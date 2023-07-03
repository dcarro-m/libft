/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:20:27 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 12:01:11 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void print_char_index(void *n)
{
	printf("El caracter en la posicion %s \n", n);
}

int	main()
{
	t_list	*lst;

	lst = NULL;	
	lst = ft_lstnew("pequeño");
	printf("%lu\n", sizeof(lst->content));
	lst->next = ft_lstnew("pajaro");
	lst->next->next = ft_lstnew("loco");
	ft_lstiter(lst, print_char_index);
	return (free(lst->next->next), free(lst->next), free(lst), 0);
}*/
