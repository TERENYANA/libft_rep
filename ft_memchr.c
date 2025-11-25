#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = s;
	unsigned char	uc = (unsigned char)c;

	while (n--)
	{
		if (*ptr == uc)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

/*int main(void)
{
    char data[] = "abcdef";
    char *pos = ft_memchr(data, 'c', sizeof(data));

    if (pos)
        printf("Caractère trouvé : %c\n", *pos);
    else
        printf("Caractère non trouvé\n");

    return 0;
}*/
