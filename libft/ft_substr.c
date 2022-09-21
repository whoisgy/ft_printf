/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:35:31 by gualee            #+#    #+#             */
/*   Updated: 2022/05/16 15:35:34 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > (size_t)ft_strlen(s))
		return (ft_strdup(""));
	i = ft_strlen(s + start);
	if (i < len)
		len = i;
	rtn = (char *)malloc(sizeof(char) * (len + 1));
	if (!rtn)
		return (NULL);
	ft_strlcpy(rtn, s + start, len + 1);
	return (rtn);
}
