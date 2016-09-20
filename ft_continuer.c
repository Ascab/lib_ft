#include <stdio.h>

int ft_continuer(const char *str)
{
    char c;
    printf("%s", str);
    do
    {
        scanf(" %c", &c);
    }while((c != 'Y') && (c != 'y') && (c =! 'N') && (c =! 'n'));
    if ((c == 'Y') || (c == 'y'))
        return 1;
    else
        return 0;
}