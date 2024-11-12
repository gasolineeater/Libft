/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:09:24 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/11 15:15:32 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	if (slen >= start)
	{
		ss = ft_calloc(sizeof(char), len + 1);
		if (ss == NULL)
			return (NULL);
		ss = ft_memcpy(ss, (s + start), len);
		ss[len] = 0;
		return (ss);
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_substr("", 6, 5));
// 	return (0);
// }
