/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:29:35 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 10:35:24 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	i = n - 1;
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;

	while (i >= 0)
	{
		dest_temp[i] = src_temp[i];
		i--;
	}
	return (dest);
}
/*int	main()
{
	#include <string.h>
	#include <stdio.h>
	char str[20] = "JoaoFlavio";
	char d[5];
	char st[20] = "JoaoFlavio";
	char d2[5];
	printf("ft_memmove : %s\n",(char *) ft_memmove(d, str, 5));
	printf("memmove : %s\n",(char *) memmove(d2, st, 5));
	return (0);
}*/
