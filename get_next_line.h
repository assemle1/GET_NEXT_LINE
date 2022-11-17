/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 01:52:45 by astalha           #+#    #+#             */
/*   Updated: 2022/11/17 12:51:42 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		check(char *line);
size_t	ft_strlen(const char	*str);
void	ft_strlcpy(char *dst, char *src, size_t dstsize);
void	cpy(char *s1, char *s2, int j);
char	*join(char *s1, char *s2);
char	*justrest(char *hold);
char	*get_the_line(char *hold);
char	*ft_strdup(char *src);
char	*get_next_line(int fd);

#endif
