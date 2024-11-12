/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:08:45 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/07 16:57:03 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (i < dstsize - 1 && *(src + i))
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		i++;
	}
	*((unsigned char *)(dst + i)) = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	src[20] = "Hello";
// 	char	dst[10] = "111111111";
// char	src1[20] = "Hello";
// 	char	dst1[10] = "2222222222";

// 	ft_strlcpy(dst, src, 5);
// 	printf("%s\n", dst);
// 	strlcpy(dst1, src1, 5);
// 	printf("%s\n", dst1);
// 	return (0);
// }
