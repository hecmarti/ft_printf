/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:20:11 by hecmarti          #+#    #+#             */
/*   Updated: 2024/03/26 10:56:14 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Print a hexadecimal number and increment the counter.
 * @param num The number to print.
 * @param counter The counter to increment.
 * @param base The base to use.
 * @note The number will be printed in hexadecimal.
 */
void	ft_puthex_pf(unsigned long num, size_t *counter, char *base)
{
	if (num > 15)
	{
		ft_puthex_pf(num / 16, counter, base);
		ft_puthex_pf(num % 16, counter, base);
	}
	else
		ft_putchar_pf(base[num], counter);
}
