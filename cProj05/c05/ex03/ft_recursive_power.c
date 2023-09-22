/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:49:18 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/15 22:16:49 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0 && nb < 0)
		return (-1);
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_recursive_power(-2, 3));
	return (0);
}
*/
