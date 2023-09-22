/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:20:19 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/17 00:26:39 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	count;

	count = 2;
	while (count * count <= nb)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb > 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_find_next_prime(3));
	printf("%d\n",ft_find_next_prime(2));
	printf("%d\n",ft_find_next_prime(4));
	printf("%d\n",ft_find_next_prime(6));
	printf("%d\n",ft_find_next_prime(2147395600));
	printf("%d\n",ft_find_next_prime(2147483647));
	return (0);
}
*/
