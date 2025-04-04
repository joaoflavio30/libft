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
