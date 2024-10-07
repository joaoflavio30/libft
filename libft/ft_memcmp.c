/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:36:14 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 11:14:25 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_ref;
	unsigned char	*s2_ref;

	i = 0;
	s1_ref = (unsigned char *)s1;
	s2_ref = (unsigned char *)s2;

	while ((*s1_ref || *s2_ref) && i++ < n)
	{
		if (*s1_ref != *s2_ref)
			return (*s1_ref - *s2_ref);
		s1_ref++;
		s2_ref++;
	}
	return (0);
}
/*int	main()
{
	char str[] = "joaa";
	char str2[] = "joao";
	#include <stdio.h>
	printf("%d\n", ft_memcmp(str, str2, 4));
	return (0);
}*/
