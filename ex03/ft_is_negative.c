

int ft_putchar(char c);
/*
{
    //write(1, &c, sizeof(c));
}
*/

void ft_is_negative(int n)
{
    n >= 0 ? ft_putchar('P') : ft_putchar('N');
    ft_putchar('\n');
}
