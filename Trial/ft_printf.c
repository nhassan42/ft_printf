/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:27:39 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/07 13:52:12 by nabilhassan      ###   ########.fr       */
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
	return (i);
}

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
			printedChars += process_params(str, params, ++i);
			if (printedChars < 0)
				return (-1);
		}
		else
		{
			printedChars = ft_printchar(str[i]);
			if (printedChars < 0)
				return (-1);
		}
		i++;
	}
	va_end(params);
	return (printedChars);
}

int main()
{
char initial;
initial = 'N';
char *name;
name = "Nabil";
    ft_printf("Initial is %c Name is %s", initial, name);
}