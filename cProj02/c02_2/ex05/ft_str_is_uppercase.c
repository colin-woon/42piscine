/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 02:04:31 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/07 02:05:06 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
	int result;

	result = ft_str_is_uppercase("1hekf471");
	printf("Result is %d\n", result);
	return(0);
}
*/
