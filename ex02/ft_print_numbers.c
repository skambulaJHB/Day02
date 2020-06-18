#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char i = '0';
    while (i <= '9')
    {
        ft_putchar(i);
        ++i;
    }
}