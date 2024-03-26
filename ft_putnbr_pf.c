/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:43:25 by hecmarti          #+#    #+#             */
/*   Updated: 2024/03/26 10:56:40 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Print a number and increment the counter.
 * @param num The number to print.
 * @param counter The counter to increment.
 * @note If the number is INT_MIN, it will print "-2147483648".
*/
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
