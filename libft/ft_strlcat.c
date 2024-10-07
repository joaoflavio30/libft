#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t buffer)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	i;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	i = buffer - dst_size;

	if(i > src_size)
	{
		while (dst_size < buffer && *src != '\0')
			dst[dst_size++] = *src++;
		dst[dst_size] = *src;
	}else if(buffer != 0)
		{
			while(i < buffer - 1)
				dst[dst_size++] = *src++;
			dst[dst_size] = '\0';
		}
	return buffer;
}
int	main()
{
	char str[] = "Joao Flavio";
	char str2[20] = "cardoso";
#include <stdio.h>
	ft_strlcat(str2,str,20);
	printf("%s\n", str2);
		return (0);
}
