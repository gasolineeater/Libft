/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:45:38 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/11 17:37:01 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	short	m;
	int		res;

	m = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 43)
		str++;
	else if (*str == 45)
	{
		m = -1;
		str++;
	}
	while (*str && *str > 47 && *str < 58)
	{
		res *= 10;
		res += *str - 48;
		++str;
	}
	return (res * m);
}

// int main(void)
// {
// 	printf("%d\n", atoi(" 	--2147483648"));
// 	printf("%d\n", ft_atoi(" 	--2147483648"));
// }
