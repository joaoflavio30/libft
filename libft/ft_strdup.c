/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:33 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/02 10:34:33 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char    *ft_strdup(const char *s)
{
        size_t              s_length;
        size_t              i;
        char    *duplicate;

        s_length = ft_strlen(s);
        i = 0;
        duplicate = (char *) malloc((s_length + 1) * sizeof(char));

        if(!duplicate)
            return (NULL);

        while (*s)
            duplicate[i++] = *s++;
        duplicate[i] = '\0';
        return (duplicate);
}
int main()
{
    char s[] = "Joao Flavio";
    printf("%s\n", ft_strdup(s));
    return (0);
}