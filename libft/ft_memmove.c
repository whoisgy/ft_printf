/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:13:39 by gualee            #+#    #+#             */
/*   Updated: 2022/04/07 18:13:42 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	if (dest == src)
		return (dest);
	if (cdest > csrc)
	{
		while (n --)
			*(cdest + n) = *(csrc + n);
		return (cdest);
	}
	while (n --)
		*cdest++ = *csrc++;
	return (dest);
}
