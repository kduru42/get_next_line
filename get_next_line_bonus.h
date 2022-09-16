/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 05:24:29 by kduru             #+#    #+#             */
/*   Updated: 2022/09/13 05:24:31 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*ft_strchr(const char *str, int c);
char	*get_next_line(int fd);
char	*read_from_file(int fd, char *str);
char	*ft_strjoin(char *left_str, char *buff);
size_t	ft_strlen(const char *str);
char	*get_line(char *str);
char	*clear_str(char	*str);
char	*ft_strdup(const char *str);

#endif
