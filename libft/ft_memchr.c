/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:24:47 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/07 18:24:47 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	if (s == NULL)
		return (NULL);

	i = 0;
	p = (unsigned char *) s;

	while (i++ < n)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (NULL);
}