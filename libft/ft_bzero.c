/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:29:11 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 10:29:13 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char*)dst;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}
/*int	main()
{
#include <strings.h>
#include <stdio.h>
	char str[] = "Ola mundo";
	ft_bzero(str, 5);
	printf("%s\n",str);
	return (0);
}*/
