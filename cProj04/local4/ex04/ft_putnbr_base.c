/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:09:52 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/20 21:46:12 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	check_base(char *base)
{
	int base_len;
	int i;
	int j;

	i = 0;
	base_len = ft_strlen(base);
	if (base[0] == '\0' || base_len == 1)
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 33 || base[i] > 126)
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);

}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	nb = nbr;
	base_len = ft_strlen(base);
	if (check_base(base) == 1)
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		if (nb < base_len)
			write(1, &base[nb], 1);
		if (nb >= base_len)
		{
			ft_putnbr_base(nb / base_len, base);
			ft_putnbr_base(nb % base_len, base);
		}
	}
}
/*
int	main(void)
{
	char *base = "0123456789ABCDEF";

	ft_putnbr_base(-2147483648, base);
	return (0);
}
*/
