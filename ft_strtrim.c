/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:02:28 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/11 15:42:02 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	int		i;
	int		e;
	int		r;

	i = 0;
	r = 0;
	if (!s1 && !set)
		return ((char *)s1);
	e = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (e > i && ft_strchr(set, s1[e]))
		e--;
	r = e - i + 1;
	res = ft_calloc(r + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1 + i, r);
	return (res);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("___elvi---", "_-"));
// }
