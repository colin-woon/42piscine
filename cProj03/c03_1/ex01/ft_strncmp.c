/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:26:26 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/09 23:52:42 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0') && count < n)
	{
		count++;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
int    main(void)
{
    int result = ft_strncmp("abcc","abc", 4);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    return (0);
}
*/
