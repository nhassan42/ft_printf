/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhassan <nhassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:49:43 by nhassan           #+#    #+#             */
/*   Updated: 2024/06/07 20:43:44 by nhassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t n)
{
	int		count;
	char	*chars;

	count = 0;
	chars = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_putptr(n / 16);
		count += ft_putptr(n % 16);
	}
	else
		count += ft_printchar(chars[n]);
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_printptr(uintptr_t adress)
{
	int	count;

	count = 0;
	count += ft_printstr("0x");
	if (count < 0)
		return (-1);
	count += ft_putptr(adress);
	if (count < 0)
		return (-1);
	return (count);
}
