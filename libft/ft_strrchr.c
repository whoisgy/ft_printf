/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:52:31 by gualee            #+#    #+#             */
/*   Updated: 2022/04/11 11:52:34 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	sl;

	p = (char *)s;
	sl = ft_strlen(s);
	if (c == '\0')
		return (p + sl);
	while (sl != 0)
	{
		if (p[sl] == (char)c)
			return (p + sl);
		sl--;
	}
	if (s[0] == (char)c)
		return (p);
	return (0);
}
