/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:41:57 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/06/06 13:56:23 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static size_t	ft_wordscount(const char *str, char c)
{
	int	count;

	count = 0;
	if (!*str)
		return (0);
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
				str++;
	}
	return (count);
}

static char	*ft_subssep(const char *str, size_t n)
{
	size_t	len;
	char	*substr;
	size_t	maxlen;

	maxlen = 0;
	len = 0;
	while (maxlen < n && str[maxlen] != '\0')
	{
		maxlen++;
	}
	len = maxlen;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, str, len + 1);
	return (substr);
}

static	char	**ft_freesplit(char	**split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	k;
	size_t	j;
	size_t	i;
	char	**split;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_wordscount(s, c) + 1));
	if (!split)
		return (NULL);
	while (i < ft_wordscount(s, c) && s[k])
	{
		while (s[k] == c)
			k++;
		j = k;
		while (s[k] != c && s[k])
			k++;
		split[i] = ft_subssep(&s[j], k - j);
		if (split[i++] == 0)
			return (ft_freesplit(split));
	}
	split[i] = NULL;
	return (split);
}

/*int	main(void)
{
	char	*str;
	char	**split;
	int		i;

	str = "Hola buenos dias";
	i = 's';
	printf("STRING: %s\n", str);
	printf("WORDS: %zu\n", ft_wordscount(str, i));
	split = ft_split(str, i);
	printf("%s\n %s\n %s\n", split[0], split[1], split[2]);
}

int main(void)
{
	const char *original_str = "A ver que narices pasa";
	char	c = 'r';
	size_t max_length;
	ft_wordscount(*original_str, c);
	
	char* substring = ft_subssep(original_str, max_length);
	if (substring != NULL)
	{
		printf("Original string: %s\n", original_str);
		printf("Substring: %s\n", substring);
		free(substring);
	}
	else
	{
		printf("Error: Failed to allocate memory for substring.\n");
	}
	return 0;
}

int	main()
{
	char str[] = "a r r A ver que narices sale por aqui";
	char	c = 'r';
	int	i;

	i = ft_wordscount(str, c);
	printf("%i \n", i);
	return (0);
}*/
