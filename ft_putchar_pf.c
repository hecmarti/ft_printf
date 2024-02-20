/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:28:39 by hecmarti          #+#    #+#             */
/*   Updated: 2024/02/20 16:15:04 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Print a character and increment the counter.
 * @param c The character to print.
 * @param counter The counter to increment.
*/
void	ft_putchar_pf(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++;
}
