/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:58:47 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/21 20:35:51 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_space_n_sign(char *str, int *sign)
{
	int		i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = *sign * -1;
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 33 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	find_value(char ori_base_nb, char *base)
{
	int	real_value;

	real_value = 0;
	while (base[real_value] != '\0')
	{
		if (ori_base_nb == base[real_value])
			return (real_value);
		real_value++;
	}
	return (-1);
}
int	ft_atoi_base(char *str, char *base)
{
	int base_ten;
	int nb_base;
	int sign;
	int new_index;
	int next_num;

	base_ten = 0;
	nb_base = check_base(base);
	sign = 1;
	if (nb_base > 1)
	{
		new_index = check_space_n_sign(str, &sign);
		next_num = find_value(str[new_index], base);
		while (next_num != -1)
		{
			base_ten = (base_ten * nb_base) + next_num;
			new_index++;
			next_num = find_value(str[new_index], base);
		}
		return (base_ten * sign);
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
  int thenbr;

  thenbr = ft_atoi_base("--+-64g hi","0123456789abcdef");
  printf("%d\n", thenbr);
  return (0);
}
*/
