/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:09:39 by gualee            #+#    #+#             */
/*   Updated: 2022/04/05 16:09:42 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int fill, unsigned int len)
{
	unsigned char	*c;

	c = ptr;
	while (len--)
	{
		*c++ = (unsigned char)fill;
	}
	return (ptr);
}
