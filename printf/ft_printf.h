/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:06:33 by ezekaj            #+#    #+#             */
/*   Updated: 2025/04/19 17:44:23 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft.h"

int	print_char(int c);
int	print_str(char *s);
int	print_digit(long num, int base, int x);
int	print_form(char specifier, va_list ap);
int	ft_printf(const char *form, ...);
int	print_udigit(unsigned long num, unsigned int base);

#endif