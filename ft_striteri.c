#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f)
        return;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
void to_uppercase(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

int main(void)
{
    char str[] = "Hello 42 school";
    printf("Before : %s\n", str);
    ft_striteri(str, to_uppercase);
    printf("After  : %s\n", str);
    return 0;
}
