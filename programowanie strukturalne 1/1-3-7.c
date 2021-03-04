#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("podaj trzy wspolczynniki rownania kwadratowego: \n");
    scanf("%d %d %d", &a, &b, &c);
    int delta = b * b - 4 * a * c;
    if(delta == 0){
            float w = -b / (2 * a);
        printf("delta rowna 0, x1 = %.f", w);
    }
    else if(delta < 0){
        printf("delta mniejsza od zera, równanie nie ma rozwiazan");
    }
    else{
        float x1 = ((-b - sqrt(delta)) / (2.0 * a));
        float x2 = ((-b + sqrt(delta)) / (2.0 * a));
        printf("x1 = %f\n", x1);
        printf("x2 = %f", x2);
    }
    return 0;
}
