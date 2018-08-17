#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_aff_last_param(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
    return (*str);
}

int     main(int ac, char **av)
{
    if (ac > 1)
    {
        ft_aff_last_param(av[ac - 1]);
    }
    else
        ft_putchar('\n');
    return (0);
}