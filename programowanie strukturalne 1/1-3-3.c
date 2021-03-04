#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("podaj trzy liczby: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c){
        printf("najwieksza liczba: %d", a);
    }
    else if(b >= c){
        printf("najwieksza liczba: %d", b);
    }
    else{
        printf("najwieksza liczba: %d", c);
    }
    return 0;
}
