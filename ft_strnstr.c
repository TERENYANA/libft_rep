#include <stdio.h>
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i, j;

    if (!*needle)
        return (char *)haystack;

    for (i = 0; i < len && haystack[i]; i++)
    {
        j = 0;
        while (needle[j] && (i + j) < len && haystack[i + j] == needle[j])
            j++;
        if (!needle[j])
            return (char *)(haystack + i);
    }
    return NULL;
}

int main(void)
{
    char *text = "hello world";
    char *res = ft_strnstr(text, "lo", 10);

    if (res)
        printf("Substring trouvée : %s\n", res);
    else
        printf("Substring non trouvée\n");

    return 0;
}
