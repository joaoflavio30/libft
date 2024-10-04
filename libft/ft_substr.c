#include "libft.h"
char *ft_substr(char const *s, unsigned int start,
size_t len)
{

    size_t          i;
    char    *substr;

    i = 0;
    substr = (char *) malloc(len + 1);
    if (!substr)
        return (NULL);
    while (i < len && start < ft_strlen(s))
            substr[i++] = s[start++];
    substr[i] = '\0';
    return (substr);
}/*
 #include <stdio.h>
int main()
{
    char s[] = "Joao Flavio";
    char *p = ft_substr(s, 5, 20);
    printf("%s\n", p);
    return (0);
}*/
