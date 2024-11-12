/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:28:53 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/11 15:17:28 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*ns;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (0);
	ns = ft_calloc((ft_strlen(s1) + ft_strlen(s2)) + 1, sizeof(char));
	if (ns == NULL)
		return (NULL);
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ns[i + j] = s2[j];
		j++;
	}
	ns[i + j] = 0;
	return (ns);
}

// int	main(void)
// {
// 	char	s[6] = "elvi";
// 	char	ss[6] = "zekaj";

// 	printf("%s\n", ft_strjoin(s, ss));
// }
