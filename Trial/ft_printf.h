/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhassan <nhassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:30:21 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/07 20:44:47 by nhassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_putnbr(int n);
int	ft_printhex(unsigned int n, int format);
int	ft_printptr(uintptr_t adress);
int	ft_putptr(uintptr_t n);
int	ft_printf(const char *str, ...);
int	ft_printstr(char *str);
int	ft_puthex(unsigned int n, char *c);
int	ft_printchar(int c);
int	ft_putunsinged(unsigned int n);
#endif
