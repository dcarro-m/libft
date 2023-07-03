/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:05:46 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 13:10:07 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subst;
	size_t	size;

	if (!s)
	{
		return (NULL);
	}
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	size = ft_strlen(s + start);
	if (size < len)
	{
		len = size;
	}
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst)
	{
		return (NULL);
	}
	ft_strlcpy(subst, s + start, len + 1);
	return (subst);
}

/*int	main()
{
	char	*s;
	unsigned int	start;
	size_t	len;

	s = "donde las dan";
	start = 5;
	len = 10;
	printf("%s \n", ft_substr(s, start, len));
	return(0);
}*/
