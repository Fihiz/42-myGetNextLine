/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   funcs.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 20:04:18 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 20:06:01 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

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