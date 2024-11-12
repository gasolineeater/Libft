/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:06:57 by ezekaj            #+#    #+#             */
/*   Updated: 2024/10/24 14:44:48 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int nb)
{
	if (nb > 47 && nb < 58)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	a;

// 	a = 49;
// 	ft_isdigit(a);
// 	printf ("%d", ft_isdigit(a));
// }
