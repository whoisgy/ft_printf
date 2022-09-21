/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:26:33 by gualee            #+#    #+#             */
/*   Updated: 2022/04/07 19:26:35 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t datasize)
{
	size_t	i;

	i = 0;
	if (datasize > 0)
	{
		while (src[i] && i < (datasize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
