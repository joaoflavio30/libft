/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:44:01 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/03 22:44:02 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int	i;

	if (!s)
		return ;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*void    func(unsigned int i, char *c)
{
    *c = *c+i;
}

#include <stdio.h>
int main(void)
{
	char str[] = "Joao";
	ft_striteri(str,func);
    printf("%s\n", str);
    return (0);
}*/
