#include <unistd.h>

// Функция ft_putendl_fd: выводит строку на fd с добавлением '\n'
void ft_putendl_fd(char *s, int fd)
{
int i = 0;
if (!s)
return;
while (s[i])
{
write(fd, &s[i], 1);
i++;
}
write(fd, "\n", 1); 
}

int main(void)
{
char *str = "Hello, world!";
ft_putendl_fd(str, 1);
return 0;
}
