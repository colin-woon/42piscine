/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:58:39 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/08 20:35:22 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = *src;
		i++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
/*
int	main(void)
{
	char copied[50];
	char *ptr = ft_strcpy(copied,"Hello");
	printf("copied is now %s\n", copied);
	printf("address of copied is %p\n", (void *)ptr);
	return (0);
}
*/
