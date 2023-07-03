/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:40:33 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 11:53:43 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	if (dst > src)
	{
		while (n-- > 0)
		{
			((char *)dst)[n] = ((char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*int	main()
{
	char	dst[21] = "una ruta super bonita";
	const char	z[15] = "caganet catalan";
	size_t	len;

	len = 21;
	ft_memmove(dst, z, len);
	write(1, dst, 20);
	printf("\n");
	ft_memmove(dst, z, len);
	write(1, dst, 20);
	return(0);
}*/
