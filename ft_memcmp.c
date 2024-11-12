/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:48:50 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/11 18:00:07 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ss1;
	char	*ss2;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ss1[i] == ss2[i])
	{
		i++;
		if (i == n)
			return (0);
	}
	return ((int)((unsigned char)ss1[i] - (unsigned char)ss2[i]));
}

// int	main(void)
// {
// 	printf("%d\n", ft_memcmp("teste", "teste", 6));
// 	printf("%d\n", memcmp("teste", "teste", 6));
// }
