/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:33:18 by hecmarti          #+#    #+#             */
/*   Updated: 2024/02/20 16:05:12 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *counter)
{
	if (!str)
	{
		ft_putstr_pf("(null)", counter);
		return ;
	}
	while (*str)
	{
		ft_putchar_pf(*str, counter);
		str++;
	}
}
