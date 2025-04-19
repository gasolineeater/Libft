/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:15:16 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/22 18:16:29 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *form, ...)
{
	va_list	ap;
	int		counter;

	va_start(ap, form);
	counter = 0;
	while (*form != '\0')
	{
		if (*form == '%')
			counter += print_form(*(++form), ap);
		else
			counter += print_char(*form);
		++form;
	}
	va_end(ap);
	return (counter);
}

// int	main(void)
// {
// 	ft_printf("%d", 45);
// 	printf("%d", 45);
//  }
