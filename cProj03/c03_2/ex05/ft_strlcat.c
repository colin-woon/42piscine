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

/* Moulinette Score - OK*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	return (strlen);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	destlen = j;
	srclen = ft_strlen(src);
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (src[i] != '\0' && i < size - destlen - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
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
