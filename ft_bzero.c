/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:09:57 by ezekaj            #+#    #+#             */
/*   Updated: 2024/10/30 18:51:02 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	*s;

// 	//s = (char *) malloc(sizeof(char) * 5);
// 	//ft_bzero(s, 4);
// 	//s[4] = 's';
// 	s = 0;
// 	int i;
// 	i = 0;
// 	// while (i < 5)
// 	// {
// 	// 	printf("%c\n", s[i]);
// 	// 	i++;
// 	// }
// 	printf("%c\n", s[4]);
// 	return (0);
// }