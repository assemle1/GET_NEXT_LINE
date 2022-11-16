/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 01:52:45 by astalha           #+#    #+#             */
/*   Updated: 2022/11/16 22:22:45 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>

int		check(char *line);
size_t	ft_strlen(const char	*str);
void	ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*join(char *s1, char *s2);
char	*justrest(char *hold);
char	*get_the_line(char *hold);
char	*ft_strdup(char *src);
char	*get_next_line(int fd);

#endif
