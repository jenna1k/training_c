#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_concat_params(int argc, char **argv);

int     main(void)
{
    char* arr[5] = {"NO", "YES", "ARG2", "ARG3", NULL};
    printf("%s", ft_concat_params(4, arr));
}