/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:35:14 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 13:03:49 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*mem;

	totalsize = count * size;
	mem = malloc(totalsize);
	if (mem != NULL)
	{
		ft_memset(mem, 0, totalsize);
	}
	return (mem);
}

/*int	main()
{
	size_t	count;
	size_t	size;
	int	*mem;
	
	count = 4;
	size = 2;
	mem = ft_calloc(count, sizeof(int));
	write(1, mem, 2);
	mem = calloc(count, sizeof(int));
	write(1, mem, 2);
	free(mem);
	return(0);
}*/
