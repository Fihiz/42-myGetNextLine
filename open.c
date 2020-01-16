/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   open.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 19:34:13 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 20:10:10 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int     main()
{
    int fd;

    fd = open("mael", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd == -1)
        write(1, "open () failed\n", 15);
    ft_putnbr_fd(fd);
    return (0);
}