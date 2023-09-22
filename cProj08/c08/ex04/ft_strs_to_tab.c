/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:26:08 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/19 17:35:11 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*newcpy;

	newcpy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (newcpy == NULL)
		return (NULL);
	return (ft_strcpy(src, newcpy));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*structs_array;
	int					i;

	i = 0;
	structs_array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!structs_array)
		return (NULL);
	while (i < ac)
	{
		structs_array[i].size = ft_strlen(av[i]);
		structs_array[i].str = av[i];
		structs_array[i].copy = ft_strdup(av[i]);
		i++;
	}
	structs_array[i].str = 0;
	structs_array[i].copy = 0;
	return (structs_array);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{;
	struct s_stock_str *structs_array = ft_strs_to_tab(ac, av);
	int i = 0;

	while (i < ac)
	{
		printf("The array of structs is at index %d\n", i);
		printf("In struct number %d, size: %d\n",i ,structs_array[i].size);
		printf("In struct number %d, str: %s\n",i ,structs_array[i].str);
		printf("In struct number %d, copy: %s\n",i ,structs_array[i].copy);
		i++;
	}
	return (0);
}
*/
