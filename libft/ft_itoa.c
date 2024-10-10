/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:23:44 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/10 10:55:06 by jcardoso         ###   ########.fr       */
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
	
	if (n == 0)
		return (ft_strdup("0"));
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
		numb[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (numb);
}