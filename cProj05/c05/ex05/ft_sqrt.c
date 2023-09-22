/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:25:45 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/15 15:18:49 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	if (nb == 0)
		return (0);
	count = 1;
	while (count <= nb)
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
	printf("%d\n",ft_sqrt(1));
	return (0);
}
*/
