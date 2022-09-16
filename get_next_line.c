/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:43:25 by kduru             #+#    #+#             */
/*   Updated: 2022/09/13 03:43:27 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

char	*read_from_file(int fd, char *str)
{
	char	*temp;
	int		char_count;

	char_count = 1;
	temp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	while (!ft_strchr(str, '\n') && char_count)
	{
		char_count = read(fd, temp, BUFFER_SIZE);
		if (char_count == -1)
		{
			free(temp);
			return (NULL);
		}		
		temp[char_count] = '\0';
		str = ft_strjoin(str, temp);
	}
	free(temp);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = read_from_file(fd, str);
	if (!str)
		return (NULL);
	line = get_line(str);
	str = clear_str(str);
	return (line);
}

int main()
{
	int fd = open("test.txt", O_RDONLY);
	char *line;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break;
		printf("%s", line);
		free(line);
	}	
	close(fd);
	return 0;
}