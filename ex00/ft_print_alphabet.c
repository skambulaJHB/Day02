#include <stdio.h>

void ft_print_alphabet(void){
    for(int i = 97; i<=122; i++){
        putchar(i);
    }
    
}


int main(){
    ft_print_alphabet();
    return 0;
}