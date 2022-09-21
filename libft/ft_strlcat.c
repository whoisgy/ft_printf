/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:15:31 by gualee            #+#    #+#             */
/*   Updated: 2022/04/09 15:15:33 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	size_t	lendest;
	size_t	res;
	size_t	lensrc;
	size_t	i;

	s = (char *)src;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > lendest)
		res = lensrc + lendest;
	else
		res = lensrc + size;
	while (s[i] && (lendest + 1) < size)
	{
		dest[lendest] = s[i];
		lendest++;
		i++;
	}
	dest[lendest] = '\0';
	return (res);
}
