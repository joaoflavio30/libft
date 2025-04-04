/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:36:50 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/07 18:36:50 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lenght;

	i = 0;
	if (!dst || !src)
		return (0);
	lenght = ft_strlen(src);
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lenght);
}
/*int	main()
{
	#include <stdio.h>
	#include <string.h>
	char str[] = "joaoflavio";
	char str2[20];
	ft_strlcpy(str2,str, 20);
	printf("%s\n", str2);
	return (0);
}*/
