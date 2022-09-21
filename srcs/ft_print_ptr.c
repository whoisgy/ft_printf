/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:36:51 by gualee            #+#    #+#             */
/*   Updated: 2022/09/21 21:54:08 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// unitptr_t = unsigned pointer type
// capable of storing data pointer / typically means same size as pointer
int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len ++;
		num = num / 16;
	}
	return (len);
}
//if num >= 16, divide to get lcm, modulo to remove float

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr (num / 16);
		ft_put_ptr (num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + 48), 1);
		else
			ft_putchar_fd ((num - 10 + 'a'), 1);
	}
}
// (num + '0') = (num + 48), where 48 is 0 in ASCII
// (num + '0') used to convert int to char
// (num - 10 + 'a') to convert hex num to alphabet

// 0x should be included before pointer
int	ft_print_ptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	print_len += write (1, "0x", 2);
	if (ptr == 0)
		print_len += write (1, "0", 1);
	else
	{
		ft_put_ptr (ptr);
		print_len += ft_ptr_len (ptr);
	}
	return (print_len);
}
