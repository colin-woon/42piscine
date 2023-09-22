/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:09:10 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/09 21:23:39 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	strlen;

	strlen = 0;
	while (*str)
	{
		strlen++;
		str++;
	}
	return (strlen);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	ori_destlen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	ori_destlen = destlen;
	while (*dest != '\0' && destlen < size)
	{
		dest++;
	}
	while (*src != '\0' && destlen < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		destlen++;
	}
	*dest = '\0';
	return (ori_destlen + srclen);
}
/*
#include <stdio.h>
int main (void)
{
    char src[] = "World";
        char dest [10] = "Hello ";
    printf("%i \n", ft_strlcat(dest, src, 10));
    printf("%s \n", dest);
}
*/
