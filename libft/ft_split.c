/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:04:17 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/03 14:22:00 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
		while (s[i] != '\0')
		{
				if(s[i] == c)
						count++;
				i++;
		}
		return (count);
}

static char **split(char const *s, char **array, int i, char c)
{
	 int    j;

	j = 0;
     while(*s)
        {
            if(*s == c)
            {
                array[j] = (char *)malloc(i + 1);
                if(!array[j])
                    return (NULL);
                ft_strlcpy(array[j], s - i, i+1);
                i = -1;
                j++;
            }
            i++;
            s++;
        }
        array[j] = (char *) malloc(i+1);
            if(!array[j])
                return (NULL);
        ft_strlcpy(array[j], s - i, i + 1);
        array[++j] = 0;
        return array;
}

char **ft_split(char const *s, char c)
{
		char        **array;

		array = (char **) malloc(sizeof(char *) * (count_words(s, c)) + 1);
		if (!array)
			return (NULL);
		return (split(s, array, 0, c));
}
#include <stdio.h>
int main()
{
		int i = 0;
		char    **arr = ft_split("Welcome to the jungle", ' ');
		while(i < count_words("Welcome to the Jungle", ' '))
		{
				printf("%s\n",arr[i]);
				i++;
		}
		printf("arr[0][8] : %c\n", arr[0][6]);
		return (0);
}
