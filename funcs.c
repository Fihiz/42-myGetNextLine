/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   funcs.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 20:04:18 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 19:06:32 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar_fd(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_fd(int fd)
{
	long nb;

	nb = fd;
	if (nb < 0)
	{
		ft_putchar_fd('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10);
		ft_putnbr_fd(nb % 10);
	}
	else
		ft_putchar_fd(nb + '0');
}