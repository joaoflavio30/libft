/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:49 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 14:46:35 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0' || big == little)
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			while (big[i + j] == little[j] && (i + j) < len)
			{
				j++;
				if (little[j] == '\0')
					return ((char *)(big + i));
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}