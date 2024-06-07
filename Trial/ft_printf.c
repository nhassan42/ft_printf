/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhassan <nhassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:27:39 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/07 20:39:02 by nhassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	process_params(const char *format_speci, va_list param, int i)
{
	int	count;

	count = 0;
	if (format_speci[i] == 'c')
		count += ft_printchar(va_arg(param, int));
	else if (format_speci[i] == 's')
		count += ft_printstr(va_arg(param, char *));
	else if (format_speci[i] == 'd' || format_speci[i] == 'i')
		count += ft_putnbr(va_arg(param, int));
	else if (format_speci[i] == 'u')
		count += ft_putunsinged(va_arg(param, unsigned int));
	else if (format_speci[i] == 'p')
		count += ft_printptr(va_arg(param, uintptr_t));
	else if (format_speci[i] == 'x')
		count += ft_printhex(va_arg(param, uintptr_t), 'x');
	else if (format_speci[i] == 'X')
		count += ft_printhex(va_arg(param, uintptr_t), 'X');
	else if (format_speci[i] == '%')
		ft_printchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printedchars;
	va_list	params;

	i = 0;
	printedchars = 0;
	va_start(params, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printedchars += process_params(str, params, ++i);
			if (printedchars < 0)
				return (-1);
		}
		else
		{
			printedchars = ft_printchar(str[i]);
			if (printedchars < 0)
				return (-1);
		}
		i++;
	}
	va_end(params);
	return (printedchars);
}
