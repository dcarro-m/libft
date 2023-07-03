/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:06:35 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 15:23:11 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;

	if (!lst)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = f(lst->content);
	if (lst->next)
	{
		new->next = ft_lstmap(lst->next, f, del);
		if (!new->next)
		{
			del(new->content);
			free(new);
			return (NULL);
		}
	}
	else
		new->next = NULL;
	return (new);
}

/*void print_char_index(void *n)
{
	printf("El caracter en la posicion %s \n", n);
}

void	del(void *lst)
{
	printf("free %s", lst);
	free(lst);
}

int	main()
{
	t_list	*lst;
	void	*f;

	char	*content = strdup("Pacorro");
	lst = (t_list *)malloc(sizeof(t_list));
	if (lst)
	{
		lst->content = content;
		lst->next = NULL;
		printf("%s \n", lst->content);
		ft_lstmap(lst, *f, del);
	}}
	return (0);
}*/
