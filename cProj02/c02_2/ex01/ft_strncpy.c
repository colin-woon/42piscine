/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 00:34:42 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/07 01:17:42 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
/*
int	main(void)
{
	char source[] = "Hello, world!";
    char destination[20];
	char *dest;

    dest = ft_strncpy(destination, source, 10); // Copy up to 10 characters

    printf("Source: %s\n", source);
    printf("Copied: %s\n", (void *)dest);
	return(0);
}
*/
