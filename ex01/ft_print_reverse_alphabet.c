void ft_putchar(char character);
/*
{
    //write(1, &character, sizeof(character));
}
*/

void ft_print_alphabet(void)
{
    char alphabet = 'z';
    while (alphabet >= 'a')
    {
        ft_putchar(alphabet);
        alphabet--;
    }
    ft_putchar('\n');
}
