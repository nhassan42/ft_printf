/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:51:48 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/06/14 10:27:23 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	int		count;

	count = 0;
	num = n;
	if (num < 0)
	{
		count += ft_printchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		count += ft_putnbr(num / 10);
		count += ft_printchar((num % 10) + '0');
	}
	else
	{
		count += ft_printchar(num + '0');
	}
	return (count);
}
