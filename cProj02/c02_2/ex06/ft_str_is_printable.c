/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 02:08:47 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/07 02:11:56 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
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

	result = ft_str_is_printable("\n");
	printf("Result is %d\n", result);
	return(0);
}
*/
