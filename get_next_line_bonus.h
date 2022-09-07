/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:47:07 by kduru             #+#    #+#             */
/*   Updated: 2022/09/07 09:47:10 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_
# define _GET_NEXT_LINE_
# define BUFFER_SIZE 1000

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *left_str, char *buff);
char	*get_line (char *str);
char	*get_new_str(char *old_str);
char	*read_line(int fd, char *str);
char	*get_next_line(int fd);

#endif
