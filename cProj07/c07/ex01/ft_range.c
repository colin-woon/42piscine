/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:22:02 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/17 16:46:28 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	diff;
	int	i;

	if (min >= max)
		return (0);
	diff = max - min;
	range = (int *)malloc(diff * sizeof(int));
	if (range == NULL)
		return (0);
	i = 0;
	while (i < diff)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>
int	main(void)
{
	int min, max, i;
	int *array;

	i = 0;
	min = -8;
	max = -3;
	
	if (ft_range(min, max) == 0)
	{
		printf("%s\n", "null");
		return (0);
	}
	array = ft_range(min, max);
	while (array[i] != '\0')
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}
*/
