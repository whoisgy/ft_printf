/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:56:09 by gualee            #+#    #+#             */
/*   Updated: 2022/04/11 13:56:12 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b, const void *c, size_t size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	i = 0;
	s1 = (const unsigned char *)b;
	s2 = (const unsigned char *)c;
	while (i < size)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
