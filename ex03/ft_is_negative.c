#include <stdio.h>

void ft_is_negative(int n){
    if(n < 0){
        putchar(78);
    }else if(n > 0){
        putchar(80);
    }
}

int main(){
    ft_is_negative(2);
    return 0;
}