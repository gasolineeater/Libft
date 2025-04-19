/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:36:18 by ezekaj            #+#    #+#             */
/*   Updated: 2025/02/08 18:28:58 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_line(char **buffer)
{
	char	*line;
	char	*nl_pos;
	size_t	i;

	if (!*buffer)
		return (NULL);
	nl_pos = ft_strchr(*buffer, '\n');
	if (nl_pos)
		i = nl_pos - *buffer + 1;
	else
		i = ft_strlen(*buffer);
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	ft_strlcpy(line, *buffer, i + 1);
	ft_strlcpy(*buffer, *buffer + i, ft_strlen(*buffer) - i + 1);
	if (**buffer == 0)
	{
		free(*buffer);
		*buffer = NULL;
	}
	return (line);
}

void	create_list(char **buffer, size_t fd)
{
	char	*list;
	int		chars_read;

	while (!ft_strchr(*buffer, '\n'))
	{
		list = malloc(BUFFER_SIZE + 1);
		if (!list)
			return ;
		chars_read = read(fd, list, BUFFER_SIZE);
		if (!chars_read)
		{
			free(list);
			return ;
		}
		list[chars_read] = '\0';
		ft_strjoin(buffer, list);
		free(list);
	}
}

char	*get_next_line(int fd)
{
	static char		*buffer;
	char			*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, line, 0) < 0)
		return (free(buffer), buffer = NULL, NULL);
	create_list(&buffer, fd);
	if (buffer == NULL)
		return (NULL);
	line = ft_get_line(&buffer);
	if (!line)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	return (line);
}

	// int main()
	// {
	// 	int fd;
	// 	char *line;

	// 	fd = open("file.txt", O_RDONLY );
	// 	if (fd < 0)
	// 		if (fd < 0) {
	//         perror("Failed to open file");
	//         return (1);
	//     }
	//     while ((line = get_next_line(fd)) != NULL) {
	//         printf("%s", line);
	//         free(line); 
	//     }
	//     close(fd);
	//     return (0);
	// }
