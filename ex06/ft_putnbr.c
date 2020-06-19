void convert(int number_to_convert){
    char a[50];
    sprintf(a, "%d", number_to_convert);
    write(1,&a,sizeof(a));
}
void ft_putchar(int number){
    convert(number);
}

