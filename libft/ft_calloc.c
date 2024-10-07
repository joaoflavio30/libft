/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:29:17 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/03 11:44:32 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (unsigned char *) malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * nmemb);
	return (ptr);
}/*int main()
{
    #include <stdio.h>
    int *ptr = (int *)ft_calloc(10, sizeof(int));

  printf("I have %d\n", ptr[9]);
  return 0;
}*/