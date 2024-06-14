/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:27:39 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/14 15:09:10 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	process_params(const char *format_speci, va_list param, int i)
{
	int	count;

	count = 0;
	if (format_speci[i] == 'c')
		count += ft_printchar((char)va_arg(param, int));
	else if (format_speci[i] == 's')
		count += ft_printstr((char *)va_arg(param, char *));
	else if (format_speci[i] == 'd' || format_speci[i] == 'i')
		count += ft_putnbr((int)va_arg(param, int));
	else if (format_speci[i] == 'u')
		count += ft_putunsigned((unsigned int)va_arg(param, unsigned int));
	else if (format_speci[i] == 'p')
		count += ft_printptr((uintptr_t)va_arg(param, uintptr_t));
	else if (format_speci[i] == 'x')
		count += ft_printhex((unsigned int)va_arg(param, unsigned int), 'x');
	else if (format_speci[i] == 'X')
		count += ft_printhex((unsigned int)va_arg(param, unsigned int), 'X');
	else if (format_speci[i] == '%')
		count += ft_printchar('%');
	return (count);
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
			printedchars += ft_printchar(str[i]);
			if (printedchars < 0)
				return (-1);
		}
		i++;
	}
	va_end(params);
	return (printedchars);
}
