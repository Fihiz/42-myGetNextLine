/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 17:44:40 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 06:40:41 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int     main()
{
    char *str;

    int fd = open("test", O_RDONLY);
    int zob = get_next_line(fd, &str);
  
    printf("LIGNE{%d}[%s]\n", zob, str);
    return (0);
}

size_t		ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// int     cut_line(char **reste, int back_n, char **line)
// {
//     if (back_n < 0) //il n'y a pas de '\n' ou vide
//     {
        //return (0) comportement gnl
//     }
//     if (back_n > 0) //'\n' a trouver et substr partie de droite puis partie de gauche
//     {

//     }
// }

int     get_next_line(int fd, char **line)
{
    char        buffer[BUFFER_SIZE + 1];
    static char *reste = NULL; //a gerer en statique multifd
    int         ret;
    int         back_n;

    // printf("RESTE[%p][%s]\n", &reste, reste);
    if (fd < 0 || BUFFER_SIZE < 1 || !line ||
        read(fd, buffer, 0) < 0 || (!reste && !(reste = ft_strnew(0)))) //de ne pas arriver a demontrer qu'elle est fausse == supposition inversee
        return (-1);
    // printf("RESTE[%p][%s]\n", &reste, reste);
    while ((back_n = ft_strindex(reste, '\n')) < 0 &&
    (ret = read(fd, buffer, BUFFER_SIZE)) > 0) //back_n prend ma recherche du backslash, ne peut encore etre vraie a ce moment donc rentree dans boucle avec lecture
    {
        buffer[ret] = '\0';
        // printf("BUFFER(%d)[%s]\n", ret, buffer);
        reste = ft_strjoin(reste, buffer, 1); //mon reste fait donc affaire de temp qui recup ce que j'ai lu et va permettre de chek en re rentrant dans la boucle
    }
    //return (cut_line(reste, back_n, line));
    return (0);
}