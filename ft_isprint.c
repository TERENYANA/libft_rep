#include <stdio.h>
int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: %s <character>\n", argv[0]);
    }
    printf ("%d\n", ft_isprint(argv[1][0]));
}
