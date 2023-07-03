/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:57:32 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/05 16:22:06 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*void	del(void *lst)
{
	printf("free %s", lst);
	free(lst);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		*lst = temp->next;
		del(temp->content);
		free(temp);
		temp = *lst;
	}
}

/*int	main()
{
	t_list	*lst;

	char	*content = strdup("Pacorro");
	lst = (t_list *)malloc(sizeof(t_list));
	if (lst)
	{
		lst->content = content;
		lst->next = NULL;
		printf("%s \n", lst->content);
		ft_lstclear(&lst, del);
	}
	return (0);
}*/
