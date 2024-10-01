#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;
	unsigned char *str;

	str = (unsigned char *)dest;

	i = 0;
	while (i++ < count)
		str[i] = c;
	return str;
}

int	main()
{

#include <stdio.h>
	char str[] = "Olá mundo!";
	printf("%s\n", str);
	ft_memset(str+2, '-', 5);
	printf("%s\n", str);
	return 0;
}
