/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 17:44:40 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/28 21:49:22 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

size_t			ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int				cut_line(char **reste, int back_n, char **line)
{
	char *temp;

	if (back_n < 0)
	{
		*line = ft_strdup(*reste);
		free(*reste);
		*reste = NULL;
		return (0);
	}
	*line = ft_substr(*reste, 0, back_n);
	temp = ft_substr(*reste, back_n + 1, ft_strlen(*reste + back_n + 1));
	free(*reste);
	*reste = temp;
	return (1);
}

int				get_next_line(int fd, char **line)
{
	char		buffer[BUFFER_SIZE + 1];
	static char *reste;
	int			ret;
	int			back_n;

	if (fd < 0 || BUFFER_SIZE < 1 || !line ||
			read(fd, buffer, 0) < 0 || (!reste && !(reste = ft_strnew(0))))
		return (-1);
	while ((back_n = ft_strichr(reste, '\n')) < 0 &&
			(ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		reste = ft_strjoin(reste, buffer, 1);
	}
	return (cut_line(&reste, back_n, line));
}
