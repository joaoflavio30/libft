/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:41:44 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 14:42:29 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while((*str1 || *str2) && i++ < n)
	{
		if (*str1 > *str2)
			return (1);
		if (*str1 < *str2)
			return (-1);
		str1++;
		str2++;
	}
	return (0);
}
/*int	main()
{
	char str1[] = "abbfff";
	char str2[] = "abbfffa";

#include <stdio.h>
	printf("%d\n", ft_strncmp(str1, str2, 7));
	return (0);
}*/