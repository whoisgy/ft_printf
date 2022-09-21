/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s1dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:47:21 by gualee            #+#    #+#             */
/*   Updated: 2022/04/13 12:47:23 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupword;
	char	*cpy;

	dupword = (char *)malloc(ft_strlen((char *)s1) + 1);
	if (dupword == NULL)
		return (NULL);
	cpy = dupword;
	while (*s1)
		*dupword++ = *(char *)s1++;
	*dupword = '\0';
	return (cpy);
}
