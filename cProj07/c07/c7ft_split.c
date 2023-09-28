/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwoon <cwoon@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:45:17 by cwoon             #+#    #+#             */
/*   Updated: 2023/08/22 17:05:21 by cwoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Moulinette Score - OK*/

#include <stdlib.h>

int	char_match_seperator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
		{
			return (1);
		}
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
		while (str[i] != '\0' && char_match_seperator(str[i], charset))
			i++;
		if (str[i] != '\0')
			no_of_strings++;
		while (str[i] != '\0' && !char_match_seperator(str[i], charset))
			i++;
	}
	return (no_of_strings);
}

int	ft_strlen_no_sep(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !char_match_seperator(str[i], sep))
		i++;
	return (i);
}

char	*assign_word(char *str, char *charset)
{
	char	*word;
	int		i;
	int		word_len;

	i = 0;
	word_len = ft_strlen_no_sep(str, charset);
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
	char	**strings;
	int		nth_string;

	nth_string = 0;
	strings = (char **)malloc(sizeof(char *) \
			* (count_strings(str, charset) + 1));
	while (*str)
	{
		while (*str != '\0' && char_match_seperator(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[nth_string] = assign_word(str, charset);
			nth_string++;
		}
		while (*str != '\0' && !char_match_seperator(*str, charset))
			str++;
	}
	strings[nth_string] = 0;
	return (strings);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
*/
