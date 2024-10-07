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
	int	i;
	int	count;

	count = 1;
	i = 0;
	ft_strtrim(s, &c);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

static void	word_dup(const char *s, char *str, int size)
{
	int	i;

	i = 0;
	while (i++ < size)
		*str++ = *s++;
	*str = '\0';

}

static char	**split(char const *s, char **array, int i, char c)
{
	int	j;

	j = 0;
	while (*s)
	{
		if (*(s + 1) == c || *(s + 1) == '\0')
		{
				
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	while (*s == ' ')
		s++;
	return (split(s, array, 0, c));
}
