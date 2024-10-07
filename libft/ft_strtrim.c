/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:24:51 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/03 11:35:56 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	str = 0;

	if (s1 || set)
	{
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end] && ft_strchr(set, s1[end]))
			end--;
	}
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 2);
	return (str);
}
/*#include <stdio.h>
int main()
{
        printf("%s\n", ft_strtrim("******!**abc****", "*a"));

    return (0);
}*/
