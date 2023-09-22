/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:26:26 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/11 22:15:15 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && count < n)
	{
		if (s1[count] > s2[count])
		{
			return (1);
		}
		else if (s1[count] < s2[count])
		{
			return (-1);
		}
		count++;
	}
	return (0);
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
