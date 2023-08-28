/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:28:49 by stas              #+#    #+#             */
/*   Updated: 2022/11/14 20:55:18 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printtype(char s, va_list ag)
{
	int	value;

	value = 0;
	if (s == 'c')
		value += ft_putchar(va_arg(ag, int));
	else if (s == 's')
		value += ft_putstr(va_arg(ag, char *));
	else if (s == 'i' || s == 'd')
		value += ft_putnbr(va_arg(ag, int));
	else if (s == 'u')
		value += ft_ui(va_arg(ag, unsigned int));
	else if (s == 'p')
	{
		value += ft_putstr("0x");
		value += ft_po(va_arg(ag, unsigned long));
	}
	else if (s == 'x')
		value += ft_hex(va_arg(ag, unsigned int), 0);
	else if (s == 'X')
		value += ft_hex(va_arg(ag, unsigned int), 1);
	else if (s == '%')
		value += ft_putchar(s);
	else
		return (ft_putchar(s));
	return (value);
}

int	ft_printf(const char *s, ...)
{
	va_list	ag;
	int		i;
	int		value;

	va_start(ag, s);
	i = 0;
	value = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			while (s[i] == ' ' && s[i])
				i++;
			value += ft_printtype(s[i], ag);
		}
		else
			value += ft_putchar(s[i]);
		i++;
	}
	va_end(ag);
	return (value);
}
