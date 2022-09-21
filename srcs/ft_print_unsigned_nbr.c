/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_nbr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:48:44 by gualee            #+#    #+#             */
/*   Updated: 2022/09/21 21:54:56 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len ++;
		num = num / 10;
	}
	return (len);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num [len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_print_unsigned_nbr(unsigned int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
		print_length += write (1, "0", 1);
	else
	{
		num = ft_unsigned_itoa (n);
		print_length += ft_print_str (num);
		free (num);
	}
	return (print_length);
}
