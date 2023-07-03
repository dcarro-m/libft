/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:13:14 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 13:22:48 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		final;
	int		i;
	char	*stringcut;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	i = 0;
	final = ft_strlen(s1) - 1;
	while (set[i] != '\0' && final >= 0)
	{
		while (s1[start] == set[i] || s1[final] == set[i])
		{
			if (s1[start] == set[i])
				start++;
			if (s1[final] == set[i])
				final--;
			i = 0;
		}
		i++;
	}
	stringcut = ft_substr(s1, start, final - start + 1);
	return (stringcut);
}

/*int	main()
{
	char	*s1;
	char	*set;
	char	*stringcut;

	s1 = "Amparo Amparito Amparo ";
	set = "Aampo ";
	printf("%s \n", ft_strtrim(s1, set));
	stringcut = ft_strtrim(s1, set);
	free(stringcut);
	return (0);
}*/
