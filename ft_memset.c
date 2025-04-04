/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:21:46 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 10:31:37 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)dest;
	i = 0;
	while (i < count)
	{
		str[i] = c;
		i++;
	}
	return (dest);
}
