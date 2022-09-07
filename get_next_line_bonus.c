/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:43:13 by kduru             #+#    #+#             */
/*   Updated: 2022/09/07 09:43:15 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(int fd, char *str)
{
	char	*buffer;
	int		read_bytes;

	buffer = (char	*)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	read_bytes = 1;
	while (!ft_strchr(str, '\n') && read_bytes)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free (buffer);
			return (0);
		}
		buffer[read_bytes] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}


char	*get_next_line(int fd)
{
	static char	*str[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str[fd] = read_line(fd, str[fd]);
	if (!str)
		return (NULL);
	line = get_line(str[fd]);
	str[fd] = get_new_str(str[fd]);
	return (line);
}
