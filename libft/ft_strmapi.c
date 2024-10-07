/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:20:04 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/03 22:20:04 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    int     i;
    int     len;
    char    *str;
    if(!s)
        return (NULL);

    i = 0;
    len = ft_strlen(s);
    str = (char *) malloc(len + 1);
    if(!str)
        return (NULL);
    while(s[i] != '\0')
    {
        str[i] = f(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
/*char    func(unsigned int i, char c)
{
    return (c + i);
}

#include <stdio.h>
int main(void)
{
    printf("%s\n", ft_strmapi("Joao",func));
    return (0);
}*/