/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:23:55 by gualee            #+#    #+#             */
/*   Updated: 2022/04/13 10:23:57 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t nchar)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[i] == '\0' || n == NULL)
		return ((char *)h);
	while (h[i] && i < nchar)
	{
		j = 0;
		while ((h[i + j] && n[j] == h[i + j]) && (i + j < nchar))
		{
			if (n[j + 1] == 0)
				return ((char *)(&h[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}
