/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:08:35 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/20 16:53:29 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	check_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return (total_len = total_len - ft_strlen(sep) + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		res_len;

	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	res_len = check_total_len(size, strs, sep);
	result = (char *)malloc(res_len);
	ft_strcpy(result, strs[0]);
	i = 0;
	while (++i < size)
	{
		result = ft_strcat(result, sep);
		result = ft_strcat(result, strs[i]);
	}
	result[res_len - 1] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char *strs[] = { "Hello ", "world"};
	char *sep = "&&&";
	int size = 2;

	char *result = ft_strjoin(size, strs, sep);
	printf("%s" , result);
	free(result);
}
*/
