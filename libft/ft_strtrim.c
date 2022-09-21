/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:08:14 by gualee            #+#    #+#             */
/*   Updated: 2022/05/16 17:08:17 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char ch, const char *set)
{
	while (*set)
		if (ch == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*rtn;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (checkset(s1[start], set) == 0)
		start++;
	if (start == (size_t)ft_strlen(s1))
	{
		rtn = ft_strdup("");
		if (!rtn)
			return (NULL);
		else
			return (rtn);
	}
	while (checkset(s1[end - 1], set) == 0)
		end--;
	rtn = ft_substr(s1, start, end - start);
	return (rtn);
}
