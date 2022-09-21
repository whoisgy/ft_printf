/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:53:56 by gualee            #+#    #+#             */
/*   Updated: 2022/05/19 18:53:58 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			c = n + '0';
			write (fd, &c, 1);
		}
		else
		{
			ft_putnbr_fd (n / 10, fd);
			c = (n % 10) + '0';
			ft_putchar_fd(c, fd);
		}
	}
}
