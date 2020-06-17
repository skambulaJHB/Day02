#include <stdio.h>

void ft_print_reverse_alphabet(void){
    for(int i = 122; i>=97; i--){
        putchar(i);
    }
    
}


int main(){
    ft_print_reverse_alphabet();
    return 0;
}