/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:39:59 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/07 18:39:59 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			str_len;

	if (str == NULL)
		return (NULL);
	str_len = ft_strlen(str);

	while (str_len > -1)
	{
		if (*str == c)
			return ((char *)(str));
		str_len--;
		str--;
	}
	return (NULL);
}
