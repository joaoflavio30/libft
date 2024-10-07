#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char *p;

	if (s == NULL)
		return (NULL);

	i = 0;
	p = (unsigned char *) s;

	while (*p && i++ < n)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (NULL);
}/*int	main()
{
#include <stdio.h>
 const char str1[] = "abcdef";
    const char ch = 'd';

       char* result = (char*)ft_memchr(str1, ch, 6);

          if (result != NULL) {
		         printf("'%c' found at position %ld\n", ch, result - str1);
			    } else {
				           printf("'%c' not found in the string\n", ch);
					      }

	     return 0;
}*/