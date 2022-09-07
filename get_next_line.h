/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 06:00:28 by kduru             #+#    #+#             */
/*   Updated: 2022/09/06 06:00:31 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _GET_NEXT_LINE_
# define _GET_NEXT_LINE_
# define BUFFER_SIZE 1000

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(char *s, int c);
static char	*dongu(char const *s1, char const *s2);
char	*ft_strjoin(char *left_str, char *buff);
char	*get_line (char *str);
char	*get_new_str(char *old_str);
char	*read_line(int fd, char *str);
char	*get_next_line(int fd);

#endif