#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t lenght;
	i = 0;
	lenght = ft_strlen(src);
	if (size > lenght)
	{
		while (i++ < size && *src != '\0')
			*dst++ = *src++;
		*dst++ = *src++;
	}
	else if(size != 0)
	{
		while (i++ < size - 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (i-1);
}

int	main()
{
	#include <stdio.h>
	#include <string.h>
	char str[] = "joaoflavio";
	char str2[20];
	ft_strlcpy(str2,str, 20);
	printf("%s\n", str2);
	return (0);
}
