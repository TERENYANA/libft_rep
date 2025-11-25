#include <unistd.h>
void ft_putstr_fd(char *s, int fd)
{
int i = 0;
if (!s)
return;
while (s[i])
{
write(fd, &s[i], 1);
i++;
}
}
int main(void)
{
char *str = "Hello, world!\n";
ft_putstr_fd(str, 1);
return 0;
}
