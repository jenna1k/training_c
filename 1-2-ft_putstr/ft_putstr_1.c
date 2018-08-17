#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}