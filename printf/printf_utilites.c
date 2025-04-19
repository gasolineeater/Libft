/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utilites.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:20:44 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/22 18:44:03 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(char *s)
{
	int	counter;

	counter = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (*s != '\0')
	{
		print_char((int) *s);
		++counter;
		++s;
	}
	return (counter);
}

int	print_digit(long num, int base, int x)
{
	int		counter;
	char	*sym;

	if (x == 0)
		sym = "0123456789abcdef";
	else
		sym = "0123456789ABCDEF";
	if (num < 0)
	{
		print_char('-');
		return (print_digit(-num, base, x) + 1);
	}
	if (num < base)
		return (print_char(sym[num]));
	else
	{
		counter = print_digit(num / base, base, x);
		return (counter + print_digit(num % base, base, x));
	}
}

int	print_udigit(unsigned long num, unsigned int base)
{
	int		counter;
	char	*sym;

	sym = "0123456789abcdef";
	if (num < base)
		return (print_char(sym[num]));
	else
	{
		counter = print_udigit(num / base, base);
		return (counter + print_udigit(num % base, base));
	}
}

int	print_form(char specifier, va_list ap)
{
	int	counter;

	counter = 0;
	if (specifier == 'c')
		counter += print_char(va_arg(ap, int));
	else if (specifier == 's')
		counter += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		counter += print_digit((long)va_arg(ap, int), 10, 0);
	else if (specifier == 'x')
		counter += print_digit((long)va_arg(ap, unsigned int), 16, 0);
	else if (specifier == 'X')
		counter += print_digit((long)va_arg(ap, unsigned int), 16, 1);
	else if (specifier == 'u')
		counter += print_udigit((unsigned int)va_arg(ap, unsigned int), 10);
	else if (specifier == 'p')
	{
		counter += write(1, "0x", 2);
		counter += print_udigit((unsigned long)va_arg(ap, unsigned long), 16);
	}
	else
		counter += write(1, &specifier, 1);
	return (counter);
}
