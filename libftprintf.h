/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhassan <nhassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:58:49 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/07 14:30:51 by nhassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
int ft_putchars(int c);
size_t	ft_strlen(const char *s);
int	ft_putstr(char *str);
int	ft_printf(const char *, ...);
static int	process_params(const char *format_speci, va_list param, int i)

#endif