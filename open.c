/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   open.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 19:34:13 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 18:44:01 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_putchar_fid(int fd, char c)
{
	write(fd, &c, 1);
}

int     main()
{
    int fd;

    fd = open("lecture", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd == -1)
    {
        write(1, "open () failed\n", 15);
        return (1);
    }
    ft_putnbr_fd(fd);
    ft_putchar_fid(fd, 'l');
    return (0);
}