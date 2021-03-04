#include <stdio.h>
#include <stdlib.h>

int main(){
    float l1, l2;
    int n;
    printf("wybierz operacje: \n");
    printf("1. dodawanie\n");
    printf("2. odejmowanie\n");
    printf("3. mnozenie\n");
    printf("4. dzielenie\n");
    scanf("%d", &n);
    printf("\npodaj dwie liczby: ");
    scanf("%f %f", &l1, &l2);
    if(n == 1){
        float a = l1 + l2;
        printf("%.f + %.f = %.f", l1, l2, a);
    }
    else if(n == 2){
        float a = l1 - l2;
        printf("%.f - %.f = %.f", l1, l2, a);
    }
    else if(n== 3){
        float a = l1 * l2;
        printf("%.f * %.f = %.f", l1, l2, a);
    }
    else if(n== 4){
        float a = l1 / l2;
        printf("%f / %f = %g", l1, l2, a);
    }
    else{
        pritnf("podana liczba nie jest przypisana żadnej operacji. zamykanie...");
    }
    return 0;
}
