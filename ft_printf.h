/* ************************************************************************** */
/*	                                                                    */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualee <gualee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:23:56 by gualee            #+#    #+#             */
/*   Updated: 2022/09/17 21:47:05 by gualee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h" 
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_str(va_list args, const char str);
int		ft_print_percent(void);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_str(char *str);
int		ft_print_nbr(int n);
int		ft_print_unsigned_nbr(unsigned int n);
int		ft_print_char(int c);
int		ft_print_hex(unsigned int num, const char str);

void	ft_put_str(char *str);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);
char	*ft_unsigned_itoa(unsigned int n);
int		ft_num_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char str);
int		ft_hex_len(unsigned int num);

#endif