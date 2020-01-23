/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 17:44:30 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 06:41:39 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 3
#endif

size_t  ft_strlen(char *str);
int		ft_strindex(char *str, char c);
char	*ft_strdup(char *src);
char	*ft_strjoin(char *s1, char *s2, int id);
void	*ft_strnew(int size);
int     get_next_line(int fd, char **line);

#endif