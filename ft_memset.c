/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:55:56 by ezekaj            #+#    #+#             */
/*   Updated: 2024/10/30 15:55:16 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)(b + i)) = (unsigned char) c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	k[12] = "Elvi9";

// 	ft_memset(k, 0, 10);
// 	printf("%s\n", k);
// }
