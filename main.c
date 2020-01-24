/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 01:00:57 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 01:05:00 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int ac, char **av)
{
	int ret, fd;
	char *line;

	fd = open(av[1], O_RDONLY);
	while (1)
	{
		ret = get_next_line(fd, &line);
		printf("[%d] [%d] '%s'\n", fd, ret, line);
		free(line);
		if (ret <= 0)
			break;
	}
	close(fd);
	return (0);
}