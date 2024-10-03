/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:24:51 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/02 13:24:51 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    size_t          i;
    size_t          j;
    size_t          str_len;
    char    *str;

    i = 0;
    j = 0;
    str_len = ft_strlen(s1) - ft_strlen(set);
    str = (char *) malloc(str_len + 1);
    if(!str)
        return (NULL);
    int k = 0;
    while (s1[i] != '\0')
    {
        k = i;
        if(s1[i] == set[0])
        {
            while (s1[i] == set[j] && set[j] != '\0')
            {
                i++;
                j++;
            }
            if (set[j] != '\0')
            {
                i = k;
                j = 0;
            }
        }
        *str++ = s1[i];
        i++;
    }
    *str = '\0';
    return (str - str_len);
}

#include <stdio.h>
int main(int ac, char *av[])
{
    if (ac == 3)
    {
        printf("%s\n", ft_strtrim(av[1], av[2]));
    }
    return (0);
}