/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:50:43 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/15 20:28:02 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb >= 0)
	{
		if ((nb / 10) != 0)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	return ;
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
