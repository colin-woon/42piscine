/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:20:19 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/15 15:46:46 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;
	int	div;

	count = 0;
	div = 1;
	while (div <= nb)
	{
		if (nb % div == 0)
			count++;
		div++;
	}
	if (count == 2)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_is_prime(97));
	return (0);
}
*/
