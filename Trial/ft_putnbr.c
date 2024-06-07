/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhassan <nhassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:51:48 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/07 20:42:39 by nhassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	int		count;

	count = 0;
	if (n == -2147483648)
		count += ft_printstr("-2147483648");
	num = n;
	if (num < 0)
	{
		count += ft_printchar('-');
		num *= -1;
		count += ft_putnbr(num);
	}
	if (num > 9)
	{
		count += ft_putnbr(num / 10);
		count += ft_printchar((num % 10) + '0');
	}
	else
		count += ft_printchar(num + '0');
	if (count < 0)
		return (-1);
	return (count);
}
