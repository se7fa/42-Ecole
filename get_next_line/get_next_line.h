/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:12:31 by stas              #+#    #+#             */
/*   Updated: 2022/11/16 13:12:32 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 15
# endif

size_t	ft_strlen(char *str);
char	*ft_buff(int fd, char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *str, char *buff);
char	*ft_strchr(char *str, int c);
char	*ft_get_line(char *str);
char	*ft_last_str(char *str);
#endif
