#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_aff_a(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
            ft_putchar('a');
        i++;
    }
    ft_putchar('\n');
    return (*str);
}

int     main(int ac, char **av)
{
    if ( ac == 2)
    {
        ft_aff_a(av[1]);
    }
    else
    {
        ft_putchar('a');
        ft_putchar('\n');
    }
    return (0);
}