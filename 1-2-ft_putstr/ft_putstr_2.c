#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}










void    ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}