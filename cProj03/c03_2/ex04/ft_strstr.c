/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:09:09 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/11 22:19:13 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Moulinette Score - KO*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char haystack[] = "hshcshs";
    char needle[] = "sh";

    char *result = ft_strstr(haystack, needle);

    if (result) {
        printf("Substring found at index: %ld\n", result - haystack);
    } else {
        printf("Substring not found.\n");
    }
	return (0);
}
*/
