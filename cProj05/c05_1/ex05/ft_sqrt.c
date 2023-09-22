/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:25:45 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/17 00:07:28 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	count;

	if (nb <= 0)
		return (0);
	count = 1;
	while (count * count <= nb)
	{
		if (count * count == nb)
			return (count);
		count++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_sqrt(2147483647));
	printf("%d\n",ft_sqrt(2147395600));
	printf("%d\n",ft_sqrt(-2147483648));
	return (0);
}
*/
