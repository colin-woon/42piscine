/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:07:26 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/23 23:20:24 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep_match(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	no_of_strings;

	i = 0;
	no_of_strings = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && sep_match(str[i], charset))
			i++;
		if (str[i] != '\0')
			no_of_strings++;
		while (str[i] != '\0' && !sep_match(str[i], charset))
			i++;
	}
	return (no_of_strings);
}

int	ft_strlen_wo_sep(char *str, char *sep)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0' && !sep_match(str[strlen], sep))
		strlen++;
	return (strlen);
}

char	*assign_word(char *str, char *charset)
{
	char	*word;
	int		word_len;
	int		i;

	i = 0;
	word_len = ft_strlen_wo_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_strings;
	int		total_strings;
	int		nth_string;

	nth_string = 0;
	total_strings = count_strings(str, charset);
	split_strings = (char **)malloc(sizeof(char *) * (total_strings + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && sep_match(*str, charset))
			str++;
		if (*str != '\0')
		{
			split_strings[nth_string] = assign_word(str, charset);
			nth_string++;
		}
		while (*str != '\0' && !(sep_match(*str, charset)))
			str++;
	}
	split_strings[nth_string] = 0;
	return (split_strings);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 0;
		char **splitted = ft_split(argv[1], argv[2]);
		while (splitted[i] != 0)
		{
			printf("%s\n", splitted[i]);
			i++;
		}
	}
	return (0);
}
*/
