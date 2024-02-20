/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:43:25 by hecmarti          #+#    #+#             */
/*   Updated: 2024/02/20 15:45:44 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int num, size_t *counter)
{
	if (num == -2147483648)
	{
		ft_putstr_pf("-2147483648", counter);
		return ;
	}
	if (num < 0)
	{
		ft_putchar_pf('-', counter);
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr_pf(num / 10, counter);
		ft_putnbr_pf(num % 10, counter);
	}
	else
		ft_putchar_pf(num + '0', counter);
}
