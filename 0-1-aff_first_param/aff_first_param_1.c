#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_aff_first_param(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

int     main(int ac, char **av)
{
    if (ac > 1)
    {
        ft_aff_first_param(av[1]);
    }
    else
    {
        ft_putchar('\n');
    }
    return (0);
}

