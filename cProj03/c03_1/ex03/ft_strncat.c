/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:57:44 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/08 21:06:38 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ori_dest;
	unsigned int	count;

	ori_dest = dest;
	count = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && count < nb)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (ori_dest);
}
/*
#include <stdio.h>
int main (void)
{
	char dest[10] = "abc"; // Destination string
    char src[] = "abc";    // Source string

    ft_strncat(dest, src, 2);

    printf("Concatenated string: %s\n", dest);

	return (0);
}
*/
