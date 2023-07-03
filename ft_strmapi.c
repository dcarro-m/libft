/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 08:59:04 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 14:45:13 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			slen;
	char			*str;

	slen = ft_strlen(s);
	str = malloc(sizeof(char) * (slen + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*static char	ft_function(unsigned int i, char str)
{
	i = 32;
	return (str - i);
}

int	main(void)
{
	char    *str;
	char    *resultado;
	str = "?hola?guapa.?";
	printf("STRING ORIGINAL: %s\n", str);
	resultado = ft_strmapi(str, ft_function);
	printf("APLICAMOS LA FUNCION 'F': %s\n", resultado);
	return (0);
}*/
