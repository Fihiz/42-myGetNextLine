/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   open.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 19:34:13 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 02:52:56 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

// void	ft_putstr_fd(char *c)
// {
//     if (c)
// 	    write(1, c, ft_strlen(c));
// }

int     main()
{
    // int fd;
    // int ret;
    // char buf[BUFFER_SIZE + 1];
    
    // fd = open ("bible.txt", O_RDONLY);
    // if (fd == -1)
    // {
    //     write(1, "open () failed\n", 15);
    //     return (1);
    // }
    // while ((ret = read(fd, buf, BUFFER_SIZE)))
    // {

    //     //mon buf est ce que j'ai a lire donc faire matcher au premier '\n'
    //     buf[ret] = '\0'; 
    //     // ft_putnbr_fd(ret);
    //     ft_putstr_fd(buf);
    // }
    // ft_putnbr_fd(ret);

    char zob[7] = "0123 4\0";

    char *zob1;
    char *zob2;

    zob1 = zob;
    zob2 = zob;
    while (*zob2 && *zob2 != ' ')
        zob2++;
    printf("%p\n%p\n%ld\n", zob1, zob2, zob2 - zob1);
    return (0);
}