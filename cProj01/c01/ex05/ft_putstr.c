/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:51:40 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/06 19:59:01 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		write(1, ptr, 1);
		ptr++;
	}
}
/*
int	main(void)
{
	ft_putstr("Hello World!");
	return (0);
}
*/
