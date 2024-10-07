#include "libft.h"
char*	ft_strrchr(const char* str, int c)
{
	size_t			find;
	const char	*str2;

	if(str == NULL)
		return (NULL);

	find = 0;
	str2 = str;

	while (*str)
	{
		if (*str == c)
		{
			str2 = str;
			find = 1;
		}
		str++;
	}
	if (find == 1)
		return (char *) (str2);
	return (NULL);
}
/*int	main()
{
	#include <stdio.h>
	char str[] = "Joao Flavio";
	char c = 'a';

	printf("%s\n", ft_strrchr(str, c));
	return (0);
}*/
