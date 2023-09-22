/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:48:12 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/14 20:29:22 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 0)
		result = nb * ft_recursive_factorial(nb -1);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_recursive_factorial(-123));
	return (0);
}
*/
