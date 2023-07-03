/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:26:11 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 11:51:33 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	sumalen;
	size_t	copylen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	sumalen = dstlen + srclen;
	copylen = dstsize - dstlen - 1;
	if (dstsize <= dstlen)
	{
		return (srclen + dstsize);
	}
	if (srclen < copylen)
	{
		copylen = srclen;
	}
	ft_memcpy (dst + dstlen, src, copylen);
	dst[dstlen + copylen] = '\0';
	return (sumalen);
}

/*int	main()
{
	char	*dst;
	const char	*src;
	size_t	len;

	dst = "abcdefghijuvwxyzyxzse";
	src = "klmnopqrst";
	len = 21;
	printf("%zu \n", ft_strlcat(dst, src, len));
	return(0);
}*/
