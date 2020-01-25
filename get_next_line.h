/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 17:44:30 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 05:25:54 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

size_t		ft_strlen(char *str);
int			ft_strichr(char *str, char c);
char		*ft_strdup(char *src);
char		*ft_strjoin(char *s1, char *s2, int id);
void		*ft_strnew(int size);
char		*ft_substr(char *s, unsigned int start, size_t len);
int			get_next_line(int fd, char **line);

#endif
