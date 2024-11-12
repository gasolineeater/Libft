/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:36:42 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/04 19:46:57 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	b;

// 	b = 122;
// 	printf ("%d", ft_isalpha(b));
// }

// int	main(void)
// {
// 	int b;
// 	int i;
// 	int flag;
// 	char *cmd;
// 	size_t	size;

// 	i = 0;
// 	size = 32;
// 	flag = 0;
// 	cmd = (char *) malloc (sizeof(char) * size);
// 	getline(&cmd, &size, stdin);
// 	while (flag == 0 && cmd[i + 1] != '\0')
// 	{
// 		b = ft_isalpha(cmd[i]);
// 		if (b)
// 			i++;
// 		else
// 			flag = 1;
// 	}
// 	printf("%d\n", b);
// 	return (0);
// }
