/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:06:18 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 12:48:07 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystacklen;
	size_t	needlelen;

	haystacklen = ft_strlen(haystack);
	needlelen = ft_strlen(needle);
	if (needlelen == 0)
	{
		return ((char *)haystack);
	}
	while (*haystack && len >= needlelen)
	{
		if (ft_strncmp(haystack, needle, needlelen) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len --;
	}
	return (NULL);
}

/*int	main()
{
	char	*haystack;
	char	*needle;
	size_t	len;

	haystack = "en un lugar de la mancha";
	needle = "lugar";
	len = 7;
	printf("%s \n", ft_strnstr(haystack, needle, len));
	printf("%s \n", strnstr(haystack, needle, len));
	return(0);
}*/
