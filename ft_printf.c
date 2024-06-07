/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:42:17 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/05 20:26:08 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"

// int ft_putchar(int c)
// {
// 	write(1, &c, 1);

// 	return (1);
// }

// int	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	if (str == NULL)
// 	{
// 		write(1, "(null)", 6);
// 		return (6);
// 	}
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// 	return (i);
// }


// static int process_vars(const char format, va_list args)
// {
// 	int printed_chars;

// 	printed_chars = 0;
// 	if(format == 'c')
// 		printed_chars += ft_putchar(va_arg(args , int));
// 	else if (format == 's')
// 		printed_chars += ft_putstr(va_arg(args, char *));
// 	// else if (format == 'd'|| format == 'i')
// 	// 	printed_chars += ft_putnbr_fd(va_arg(args, int), 1);
// 	return (printed_chars);
// }
// int	ft_printf(const char *format, ...)
// {
// 	va_list	args;
// 	int		i;
// 	int		len_printed;

// 	len_printed = 0;
// 	i = 0;
// 	va_start(args, format);
// 	while (format[i] != '\0')
// 	{
// 		if (format[i] == '%')
// 		{
// 			len_printed += process_vars(format[i + 1], args);
// 			i++;
// 		}
// 		else
// 		{
// 			len_printed += ft_putchar(format[i]);
// 			i++;
// 		}
// 	}
// 	va_end(args);
// 	return (len_printed);
// }

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printedChars;
	va_list params;
	
	i = 0;
	printedChars = 0;
	va_start(params, str);

	while (str[i])
	{
		if(str[i] == '%')
		{
			printedChars += process_params()
		}
		else
		{
			printedChars = ft_printchar
		}
		
	}
}