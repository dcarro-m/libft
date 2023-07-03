/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:09:32 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 13:06:15 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_memcpy(copy, s1, ft_strlen(s1));
	copy[ft_strlen(s1)] = '\0';
	return (copy);
}

/*int main()
{
    const char *original = "Manolo Cabezabolo";
    char *copy = ft_strdup(original);

    if (copy != NULL)
    {
        printf("%s\n", original);
        printf("%s\n", copy);

        free(copy);
    }
    else
    {
        printf("NULL\n");
    }

    return(0);
}*/
