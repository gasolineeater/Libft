/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:22:48 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/07 17:20:54 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	j = 0;
	i = 0;
	if (dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	i = dstlen;
	while (j < (dstsize - dstlen - 1) && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = 0;
	return (dstlen + ft_strlen(src));
}

// int	main(void)
// {
// 	char	dst[20] = "abc";
// 	char	src[20] = "123";
// 	char	dst1[20] = "abc";
// 	char	src1[20] = "123";

// 	strlcat(dst, src, 8);
// 	printf("%s\n", dst);
// 	ft_strlcat(dst1, src1, 8);
// 	printf("%s\n", dst1);
// 	return (0);
// }
