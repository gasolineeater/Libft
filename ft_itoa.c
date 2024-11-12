/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:57:41 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/11 17:35:23 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_int_len(n);
	res = ft_calloc((len + 1), sizeof(char));
	if (res == NULL)
		return (NULL);
	i = len - 1;
	if (n < 0)
	{
		if (n <= -2147483648)
			return (free(res), ft_strdup("-2147483648"));
		n = n * -1;
		res[0] = '-';
	}
	while (n > 9)
	{
		res[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	res[i] = n + '0';
	return (res);
}
