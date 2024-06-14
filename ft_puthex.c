/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:30:32 by nhassan           #+#    #+#             */
/*   Updated: 2024/06/12 16:21:41 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char *c)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_puthex(n / 16, c);
		count += ft_puthex(n % 16, c);
	}
	else
		count += ft_printchar(c[n]);
	return (count);
}

int	ft_printhex(unsigned int n, int format)
{
	char	*c;

	if (format == 'x')
		c = "0123456789abcdef";
	else
		c = "0123456789ABCDEF";
	return (ft_puthex(n, c));
}
