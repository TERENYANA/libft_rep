
#include <stdio.h>
int    ft_isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ))
    return (1);
else
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <character>\n", argv[0]);
        return 1;
    }
    printf ("%d\n", ft_isalpha(argv[1][0]));
    return 0;
}
