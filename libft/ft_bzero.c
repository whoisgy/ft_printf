/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:14:07 by gualee            #+#    #+#             */
/*   Updated: 2022/04/05 17:14:09 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t n)
{
	char	*s;
	size_t	i;

	s = ptr;
	i = 0;
	while (i < n)
	{
		*s++ = '\0';
		++i;
	}
	return (s);
}