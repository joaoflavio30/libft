/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:29:09 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/03 11:29:37 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		if (*str == search_str)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
/*int	main(void)
{
	#include <stdio.h>
	#include <string.h>
	char str[] = "abc";
	char c = 'c';

	printf("%s\n", ft_strchr(str, c));
	printf("strchr: %s\n", strchr(str, c));
	return (0);
}*/
