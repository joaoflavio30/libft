/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:29:17 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/01 19:29:17 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t                  i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char *) malloc(size * nmemb);
    /*while(i++ < nmemb)
    {
            *ptr++ = 0; 
    }*/
   ft_memset(ptr,0, size*nmemb);
    return (ptr);
}

int main()
{
    #include <stdio.h>
    int *ptr = (int *)ft_calloc(10, sizeof(int));

  printf("I have %d\n", ptr[9]);
  return 0;
}