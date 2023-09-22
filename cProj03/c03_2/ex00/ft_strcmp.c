/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:57:39 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/23 14:54:50 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

//It will compare \0 with the next char
#include <stdio.h>
int main(void)
{
	int result = ft_strcmp("Aaa","aaa");

	if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }
	return (0);
}
