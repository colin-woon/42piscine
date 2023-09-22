/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:09:09 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/09 16:02:35 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*cur_str_tofind;
	char	*finding;

	while (*str)
	{
		cur_str_tofind = str;
		finding = to_find;
		while (*cur_str_tofind == *finding && *finding != '\0')
		{
			cur_str_tofind++;
			finding++;
		}
		if (*finding == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char haystack[] = "hshcshs";
    char needle[] = "hcs";

    char *result = ft_strstr(haystack, needle);

    if (result) {
        printf("Substring found at index: %ld\n", result - haystack);
    } else {
        printf("Substring not found.\n");
    }
	return (0);
}
*/
