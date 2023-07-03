/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:32:06 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 11:52:31 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;

	while (n > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
		n--;
	}
	return (0);
}

/*int	main()
{
	const char	*s1;
	const char	*s2;
	size_t	len;

	s1 = "en un pais diferenti";
	s2 = "en un pais diferente";
	len = 20;
	printf("%d \n", ft_memcmp(s1, s2, len));
	printf("%d \n", memcmp(s1, s2, len));
	return(0);
}*/
