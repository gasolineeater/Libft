/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:18:44 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/07 12:09:05 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	lens;
	char	*news;

	i = 0;
	lens = ft_strlen(s);
	news = ft_calloc(lens + 1, sizeof(char));
	if (!news)
		return (0);
	while (s[i])
	{
		news[i] = f(i, s[i]);
		i++;
	}
	return (news);
}
