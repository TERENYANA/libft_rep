#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <character>\n", argv[0]);
        return (1);
    }
    
    printf ("%c\n", ft_tolower((int)argv[1][0]));
    
    return (0);
}