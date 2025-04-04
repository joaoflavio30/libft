/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:35:41 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/07 18:35:41 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t buffer)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	i;

	if (!dst || !src)
		return (0);
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	i = 0;
	if (dst_size >= buffer)
		return (buffer + src_size);
	if (buffer != 0)
	{
		while ((i + dst_size) < (buffer - 1) && src[i] != '\0')
		{
			dst[dst_size + i] = src[i];
			i++;
		}
		dst[dst_size + i] = '\0';
	}
	return (src_size + dst_size);
}
