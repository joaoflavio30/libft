#include "libft.h"
#include <stdio.h>
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}
int main()
{
	char	**tabstr;
	int		i;

	i = 0;
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
}
