/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:36:54 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/19 16:40:31 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*newcpy;

	newcpy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (newcpy == NULL)
		return (NULL);
	return (ft_strcpy(src, newcpy));
}
/*
#include <stdio.h>
int	main(void)
{
	char *original = "";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);

        // Free the memory allocated by my_strdup
        free(duplicate);
    } else {
        printf("Memory allocation failed.\n");
    }
	return (0);
}
*/
