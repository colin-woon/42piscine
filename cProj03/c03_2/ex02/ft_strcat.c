/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:02:13 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/09 13:28:22 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ori_dest;

	ori_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
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

    ft_strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

	return (0);
}
*/
