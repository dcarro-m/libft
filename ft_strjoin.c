/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:46:29 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 13:16:55 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*finalstr;
	size_t	size;
	size_t	size2;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	size = (ft_strlen(s1)) + (ft_strlen(s2));
	finalstr = malloc(sizeof(char) * (size + 1));
	if (!finalstr)
	{
		return (NULL);
	}
	size2 = ft_strlen(s1) + 1;
	ft_strlcpy(finalstr, s1, size2);
	ft_strlcat(finalstr, s2, size + 1);
	return (finalstr);
}

/*int	main()
{
	char const	*s1;
	char const	*s2;

	s1 = "David ";
	s2 = "Carro";
	printf("%s \n", ft_strjoin(s1, s2));
	return (0);
}*/
