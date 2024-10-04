#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long int    nbr;

    nbr = n;
    if(nbr < 0)
    {
        ft_putchar_fd('-', fd);
        nbr = -nbr;
    }
    if(nbr > 9)
    {
        ft_putnbr_fd(nbr / 10, fd);
    }
    ft_putchar_fd((nbr % 10) + '0', fd);
}

int main(void)
{
    ft_putnbr_fd(4223456, 2);
    return (0);
}