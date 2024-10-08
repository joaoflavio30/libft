/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:04:17 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/03 14:22:00 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

static void	cpy(char *array, char const *s, int end)
{
	int	i;

	i = 0;
	while (i < end)
	{
		array[i] = *s;
		i++;
		s++;
	}
	array[i] = '\0';
}

static char	**split(char const *s, char **array, char c)
{
	int	j;
	int	i;
	int	start;
	int	end;

	j = 0;
	i = 0;

	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i - start;
		array[j] = (char *) malloc(sizeof(char *) * (end + 1));
		if (!array)
			return (NULL);
		cpy(array[j++], &s[start], end + 1);
	}
	array[j] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	while (*s == ' ')
		s++;
	return (split(s, array, c));
}
