/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:26:08 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/20 15:16:03 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>
/*
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newcpy;
	int		i;

	newcpy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (newcpy == NULL)
		return (NULL);

	i = 0;
	while (src[i])
	{
		newcpy[i] = src[i];
		i++;
	}
	newcpy[i] = '\0';
	return (newcpy);
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
*/
void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nbr)
{
	long	nb;
	char	digit;

	nb = nbr;
	digit = 'a';
	if (nb <= 9 && nb >= 0)
	{
		digit = nb + '0';
		write(1, &digit, 1);
	}
	if (nb > 9)
	{
		digit = nb % 10 + '0';
		ft_putnbr(nb / 10);
		write(1, &digit, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	struct s_stock_str *structs_array = ft_strs_to_tab(ac, av);
	ft_show_tab(structs_array);
	return (0);
}
*/
