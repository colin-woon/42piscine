/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 02:00:32 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/07 02:03:30 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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

	result = ft_str_is_lowercase("1hekf471");
	printf("Result is %d\n", result);
	return(0);
}
*/
