/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 17:44:40 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 19:58:22 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int     get_next_line(int fd, char **line)
{
    if (fd < 0 || BUFFER_SIZE == 0 || *line = '\0')
        return (-1);
    // return (1) si une ligne est lue
    // return (0) pour EOF
    //variable statique pour y stocker la ligne lue
    // et qu'elle ne perde sa valeur ancienne au rappel de fonction
}