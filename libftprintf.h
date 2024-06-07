/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:58:49 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/05 20:09:43 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_putchars(int c);
int	handle_str(va_list args);
int	handle_chars(va_list args);
size_t	ft_strlen(const char *s);
int	ft_putstr(char *str);
int	ft_printf(const char *, ...);
static int process_vars(const char format, va_list args);

#endif