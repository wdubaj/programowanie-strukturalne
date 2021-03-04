#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a = 0;
    printf("podaj nieujemną liczbę n: ");
    scanf("%d", &n);
    if(n < 0){
        printf("błąd, podana liczba n jest ujemna");
        return -1;
    }
    for(int i = 0; i <= n; i++){
        a+= i * i;
    }
    printf("suma kwadratow n elementow wynosi %d", a);
    return 0;
}
