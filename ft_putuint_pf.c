/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:34:50 by hecmarti          #+#    #+#             */
/*   Updated: 2024/03/26 10:57:46 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Print an unsigned integer and increment the counter.
 * @param num The number to print.
 * @param counter The counter to increment.
*/
void	ft_putuint_pf(unsigned int num, size_t *counter)
{
	if (num > 9)
	{
		ft_putuint_pf(num / 10, counter);
		ft_putuint_pf(num % 10, counter);
	}
	else
		ft_putchar_pf(num + '0', counter);
}
