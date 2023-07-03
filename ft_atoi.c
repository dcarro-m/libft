/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <dcarro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:23:53 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 12:59:59 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f'
		|| *str == '\v' || *str == '\r')
	{
		str++;
	}
	if (*str == '-')
	{
		i = -1;
	}
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		j = j * 10 + (*str - '0');
		str++;
	}
	j *= i;
	return (j);
}

/*int	main()
{
	int	i;
	const char	*str;

	str = "+7v";
	i = ft_atoi(str);
	printf("%d \n", ft_atoi(str));
	printf("%d \n", atoi(str));
	return(0);
}*/
