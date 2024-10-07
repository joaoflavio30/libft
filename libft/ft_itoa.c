/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:23:44 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/03 15:54:26 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*numb;
	int			len;

	nb = n;
	len = get_len(nb);
	numb = (char *) malloc(len + 1);
	if (!numb)
		return (NULL);
	numb[len] = '\0';
	if (nb < 0)
	{
		numb[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		numb[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (numb);
}
/*int	main()
{
	#include <stdlib.h>
	#include <stdio.h>

	printf("%s\n", ft_itoa(0422));
	return (0);
}*/
