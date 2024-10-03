#include "libft.h"
char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t          i;
    size_t          s1_len;
    size_t          s2_len;
    char    *str;

    i = 0;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    str = (char *) malloc((s1_len + s2_len) + 1);
    if (!str)
        return (NULL);
    while(i < s1_len)
    {
        str[i] = s1[i];
        i++;
    }
    i = 0;
    while(i < s2_len)
    {
        str[s1_len++] = s2[i];
        i++;
    }
    str[s1_len] = '\0';
    return (str);
}

#include <stdio.h>
int main(int ac, char *av[])
{
    if(ac == 3)
    {
        //char s1[] = "Joao";
        //char s2[] = " Flavio";
        printf("%s\n", ft_strjoin(av[1],av[2]));
    }
    return (0);
}
