/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:13:33 by gualee            #+#    #+#             */
/*   Updated: 2022/05/16 18:13:35 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countw(char *str, char c)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if (str[i] != c && str[i])
			word = 1;
		if (str[i] == c)
		{
			while (str[i] == c && str[i])
				i++;
			if (str[i])
				count++;
		}
		else
			i++;
	}
	return (count + word);
}

static char	*putw(char *str, char c)
{
	int		i;
	char	*array;

	i = 0;
	array = 0;
	while (str[i] && str[i] != c)
		i++;
	array = (char *)malloc(sizeof(char) * (i + 1));
	if (!array)
		return (NULL);
	ft_strlcpy(array, str, i + 1);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**array;

	if (!s)
		return (NULL);
	i = -1;
	words = countw((char *)s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	while (++i < words)
	{
		while (s[0] == c)
			s++;
		array[i] = putw((char *)s, c);
		s += ft_strlen(array[i]);
	}
	array[i] = 0;
	return (array);
}
