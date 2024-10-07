#include "libft.h"
#include <stdio.h>
int main()
{
		int i = 0;
		char    **arr = ft_split("   Welcome to the jungle", ' ');
		while(i < 4)
		{
				printf("%s\n",arr[i]);
				i++;
		}
		printf("arr[0][8] : %c\n", arr[0][0]);
		return (0);
}
