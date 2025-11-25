#include <stdio.h>
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *ptr1 = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;

    for (i = 0; i < n; i++)
    {
        if (ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
    }
    return (0);
}

/*int main(void)
{
    char data1[] = "abcdef";
    char data2[] = "abgdef";
    int result;

    result = ft_memcmp(data1, data2, 5);
    printf("%d\n", result);
}*/