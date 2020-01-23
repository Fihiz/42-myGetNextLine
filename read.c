/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   read.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 23:25:28 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 02:27:22 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"


void	ft_putstr_fd(char *c)
{
    if (c)
	    write(1, c, ft_strlen(c));
}

int     main()
{
    int fd;
    int ret;
    int pos;
    static char *temp[10240];
    char buf[BUFFER_SIZE + 1];

    pos = 0;
    fd = open("bible.txt", O_RDONLY);
    if (fd < 0 || BUFFER_SIZE < 1 || !line)
        return (-1);
    if (!temp[fd] && !(temp[fd] = ft_calloc(1, sizeof(char))))
        return (-1);
    while ((ret = read(fd, buf, BUFFER_SIZE) > 0)) //read retourne un int = tant que je read sur mon buffer donc sup a 0 puisque 0 est une EOF
    {
         buf[ret] = '\0'; //read n'ajoute pas de '\0', je dois donc le faire pour la transformer en string
        //est-ce que je ne stocke pas d'abord et je check le '\n' sur ma temp puisqu'il stocke jusqu'a temps de rentrer dans mon if, ci dessous
        pos++; //j'incremente un pointeur jusqu'a tant de tomber sur ma condition ci-dessous comme ca je peux l'utiliser pour substr
        if (ft_strchr(*buf, '\n')) //si je tombe sur un '\n'
        {
            temp = ft_substr(buf, 0, pos); //je soustrais sur ma ligne, de l'index 0 à pos supposé s'incrementer jusqu'a la case avant le '\n'
            
        }
        ft_putstr_fd(buf);
    }
        temp = ft_strdup(buf);
        ft_putstr_fd(temp);

}

// tant que je lis avec mon ret,
// si je tombe sur un '\n' je substr la partie avant que je stocke dans une temp
// je substr le reste dans une statique
//ft_substr(la string, son depart, len a laquelle il s'arrete)

        // ft_substr partie avant '\n' que je dup dans dup
        // ft_substr partie restante que je stocke dans ma statique


/* statique POUR LE RESTE, lors du prochain appel a GNL, je check :
//si je n'ai pas de '\n', je dois read le reste a nouveau 
sinon je peux retourner le reste jusqu'au '\n' ou reste vide */
