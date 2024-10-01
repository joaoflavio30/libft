#include "libft.h"
char	*ft_strchr(const char *str, int search_str)
{

	if(str == NULL)
		return (NULL);

	while (str)
	{
		if (*str == search_str)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

int	main()
{
	#include <stdio.h>
	char str[] = "F";
	char c = 'F';

	printf("%s\n", ft_strchr(str, c));
	return (0);
}
