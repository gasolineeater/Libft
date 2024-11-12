/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:59:37 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/11 18:08:18 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return ((void *)dst);
	while (i < n)
	{
		(*(unsigned char *)(dst + i)) = (*(unsigned char *)(src + i));
		i++;
	}
	return ((void *)dst);
}

// int	main(void)
// {
// 	char	src[10] = "abcdef";
// 	char	dst[10] = "12345678";

// 	printf("%s\n", ft_memcpy(dst, src, 3));
// 	printf("%s\n", memcpy(dst, src, 3));
// 	return (0);
// }
