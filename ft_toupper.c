#include <stdio.h> 
#include <locale.h>
#include <stdlib.h> // Required for return(1) in main

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <character>\n", argv[0]);
        return (1);
    }
    
    printf ("%c\n", ft_toupper((int)argv[1][0]));
    
    return (0);
}
