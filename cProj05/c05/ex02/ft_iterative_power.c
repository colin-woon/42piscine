/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:31:40 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/15 20:56:10 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0 && nb < 0)
		return (-1);
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_iterative_power(-2, 4));
	return (0);
}
*/
