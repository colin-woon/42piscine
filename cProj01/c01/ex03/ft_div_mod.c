/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:01:20 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/06 18:25:23 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	div_res;
	int mod_res;

	ft_div_mod(5, 5, &div_res, &mod_res);
	printf("*div is %d", div_res);
	printf("*mod is %d", mod_res);
	return (0);
}
*/
