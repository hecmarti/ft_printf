/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:09:02 by hecmarti          #+#    #+#             */
/*   Updated: 2024/03/26 10:57:04 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Print a pointer and increment the counter.
 * @param ptr The pointer to print.
 * @param counter The counter to increment.
 * @note The pointer will be printed in hexadecimal.
 * @note The pointer will be printed with the "0x" prefix.
 * @note The pointer will be printed in lowercase.
*/
void	ft_putptr_pf(void *ptr, size_t *counter)
{
	ft_putstr_pf("0x", counter);
	ft_puthex_pf((unsigned long long)ptr, counter, HEX_LOW_BASE);
}
