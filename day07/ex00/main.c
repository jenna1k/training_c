#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strdup(char *src);

int     main(void)
{
    char* str;
    char* res;

    str = "asdf";
    res = ft_strdup(str);
    printf("%d, '%s' vs '%s'\n", res != str, res, str);
    str = "", res = ft_strdup(str);
    printf("%d, '%s' vs '%s'\n", res != str, res, str);
    str = "hello world!", res = ft_strdup(str);
    printf("%d, '%s' vs '%s'\n", res != str, res, str);
    return (0);
}