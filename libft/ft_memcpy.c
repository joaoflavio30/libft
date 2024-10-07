/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:29:02 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 10:29:04 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_temp;
	unsigned char		*src_temp;

	i = 0;
	dest_temp = (unsigned char *) dest;
	src_temp = (unsigned char *) src;
	while (i++ < n)
		*dest_temp++ = *src_temp++;
	return (dest);
}
/*int	main()
{
#include <stdio.h>
	char src[] = "Joao Flavio";
	char dest[20];
	printf("%s\n",(char *) ft_memcpy(dest, src, 7));
}*/
