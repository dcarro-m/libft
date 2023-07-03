/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:19:25 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 11:50:45 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (0);
}

/*int	main()
{
	char	*d;
	int	c;
	const char	*str;

	str = "tres tristes tigres comen trigo en un trigal";
	c = 't';
	d = ft_strrchr(str, c);
	printf("%s \n", ft_strrchr(str, c));
	printf("%s \n", strrchr(str, c));
	return(0);
}*/
