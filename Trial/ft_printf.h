/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:30:21 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/05 21:42:59 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
static int	process_params(const char *format_speci, va_list param, int i);
int	ft_printf(const char *str, ...);
int	ft_printstr(char *str);
int ft_printchar(int c);
#endif