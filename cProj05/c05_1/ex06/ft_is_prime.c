/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:20:19 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/17 00:12:21 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	count;

	count = 2;
	if (nb < 2)
		return (0);
	while (count * count <= nb)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_is_prime(0));
	printf("%d\n",ft_is_prime(1));
	printf("%d\n",ft_is_prime(2));
	printf("%d\n",ft_is_prime(2147395600));
	printf("%d\n",ft_is_prime(2147483647));
	return (0);
}
*/
