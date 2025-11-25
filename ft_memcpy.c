#include "stddef.h"
#include <stdio.h>

memcpy(void *dst, const void *src, size_t n)
{
    size_t          i;
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return(dst);
}

int main(void)
{
    char dest[30];
    char src[] = "Hello, World!";

    memcpy(dest, src, 13);
    printf("srs: %s\n", src);
    printf("dest: %s\n", dest);
    return (0);
}
