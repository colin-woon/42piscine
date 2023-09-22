/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:47:15 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/17 17:41:22 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	*range = (int *)malloc(diff * sizeof(int));
	if (range == NULL)
		return (-1);
	i = 0;
	while (i < diff)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (diff);
}
/*
#include <stdio.h>
int	main(void)
{	
	int *array;
	int i = 0;

	printf("%d\n", ft_ultimate_range(&array, 0, 0));
	while (array[i] != '\0')
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}
*/
