/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:46:07 by gualee            #+#    #+#             */
/*   Updated: 2022/09/18 18:17:33 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str(va_list args, const char str)
{
	int	print_length;

	print_length = 0;
	if (str == 'c')
		print_length += ft_print_char(va_arg(args, int));
	else if (str == 's')
		print_length += ft_print_str(va_arg(args, char *));
	else if (str == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (str == 'd' || str == 'i')
		print_length += ft_print_nbr(va_arg(args, int));
	else if (str == 'u')
		print_length += ft_print_unsigned_nbr(va_arg(args, unsigned int));
	else if (str == 'x' || str == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), str);
	else if (str == '%')
		print_length += ft_print_percent();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_str(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_print_char (str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
