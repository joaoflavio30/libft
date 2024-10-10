/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:29:09 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/03 11:29:37 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	if (str == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == (unsigned char)search_str)
			return ((char *)str);
		str++;
	}
	if (*str == (unsigned char)search_str)
		return ((char *)str);
	return (NULL);
}
