/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:35:32 by gualee            #+#    #+#             */
/*   Updated: 2022/04/09 15:35:37 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*p;
	int		i;

	i = 0;
	p = (char *)s;
	altc = c;
	while (p[i] != altc)
	{
		if (p[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)p + i);
}
