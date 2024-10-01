/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:49 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 13:01:45 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i++ < len )
	{
		if (big[i] == little[0])
		{
			while(big[i+j] == little[j] && i < len)
			{
				j++;
				if(little[j] == '\0')
					return (char *)(big + i);
			}
		}
	}
	return (NULL);
}

int	main()
{
	char b[] = "asdlsakd asrenato";
	char l[] = "asr";
	#include <stdio.h>
	printf("%s\n", strnstr(b,l,4));
	return (0);
}
