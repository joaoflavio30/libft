/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:30:08 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 14:30:10 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *nptr)
{
	int		signal;
	int		numb;
	int	i;

	signal = 1;
	i = 0;
	numb = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\v' 
	|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\t')
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
		if (nptr[i] == '+' || nptr[i] == '-')
			return (0);
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		numb = (numb * 10) + (nptr[i] - '0');
		i++;
	}
	return (numb * signal);
}

#include <stdlib.h>
int	main()
{
	#include <stdio.h>
	printf("atoi: %i\n", atoi("027483648"));
	printf("ft_atoi: %i\n", ft_atoi("027483648"));
	return (0);
}
