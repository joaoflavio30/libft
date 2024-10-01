#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	i = n-1;
	dest_temp = (unsigned char*)dest;
	src_temp = (unsigned char*)src;

	while (i >= 0)
	{
		dest_temp[i] = src_temp[i];
		i--;
	}
	return (dest);
}
int	main()
{
	#include <string.h>
	#include <stdio.h>
	char str[20] = "JoaoFlavio";
	char st[20] = "JoaoFlavio";
	ft_memmove(str+4, str, 5);
	printf("ft_memmove : %s\n", str);
	memmove(st+4, st, 5);
	printf("memmove : %s\n", st);
	return (0);
}
