/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 01:20:37 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/07 01:55:19 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str > 'z' || *str < 'a') && (*str > 'Z' || *str < 'A'))
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

	result = ft_str_is_alpha("He2lo World");
	printf("Result is %d\n", result);
	return(0);
}
*/
