/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:40:52 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/22 19:10:47 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	check_space_n_sign(char *str, int *sign);
int	check_base(char *base);

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

int	ft_atoi_base_to_decimal(char *str, char *base)
{
	int	base_ten;
	int	nb_base;
	int	sign;
	int	new_index;
	int	next_num;

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

void	ft_putnbr_to_base(int nbr, char *base, char *new_base, int *index)
{
	long	nb;
	int		base_len;

	nb = nbr;
	base_len = check_base(base);
	if (nb < 0)
	{
		nb = nb * -1;
		new_base[*index] = '-';
		(*index)++;
	}
	if (nb < base_len)
	{
		new_base[*index] = base[nb];
		(*index)++;
	}
	if (nb >= base_len)
	{
		ft_putnbr_to_base(nb / base_len, base, new_base, index);
		ft_putnbr_to_base(nb % base_len, base, new_base, index);
	}
}

int	check_new_base_len(int nbr, char *base)
{
	int	base_value;
	int	new_base_len;

	base_value = check_base(base);
	new_base_len = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		new_base_len++;
	}
	while (nbr != 0)
	{
		nbr /= base_value;
		new_base_len++;
	}
	new_base_len++;
	return (new_base_len++);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_ten;
	int		new_base_len;
	char	*new_base;
	int		index;

	index = 0;
	if (check_base(base_from) != 0 && check_base(base_to) != 0)
	{
		base_ten = ft_atoi_base_to_decimal(nbr, base_from);
		new_base_len = check_new_base_len(base_ten, base_to);
		new_base = malloc(new_base_len * sizeof(char));
		if (!new_base)
			return (NULL);
		ft_putnbr_to_base(base_ten, base_to, new_base, &index);
		new_base[new_base_len - 1] = '\0';
		return (new_base);
	}
	return (NULL);
}

#include <stdio.h>
int main() {

  char *string = ft_convert_base("-2147483648 hi","0123456789abcdef", "01");
  printf("%s\n", string);
  return (0);
}

