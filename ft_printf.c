/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:35:49 by hecmarti          #+#    #+#             */
/*   Updated: 2024/02/20 16:15:34 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief This function will call the corresponding function to print the
 * argument according to the format.
 * @param va The va_list with the arguments.
 * @param str The format string.
 * @param counter The counter to increment.
 * @note The format string will be a single character.
*/
void	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_putptr_pf(va_arg(va, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putuint_pf(va_arg(va, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
		else
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_UPP_BASE);
	}
	else if (*str == '%')
		ft_putchar_pf(*str, counter);
}

/**
 * @brief This function is the main function of the printf project. It will
 * receive a string and a variable number of arguments. It will iterate over
 * the string and print the characters until it finds a '%' character. When it
 * finds a '%' character it will call the ft_format function to print the
 * argument according to the format.
 * @param str The string to print.
 * @param ... The variable number of arguments.
 * @return The number of characters printed.
*/
int	ft_printf(char const *str, ...)
{
	va_list		va;
	size_t		counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}
