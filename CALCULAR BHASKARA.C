#include<stdio.h>
#include<math.h>

int main(){

    float A,B,C, delta,x1,x2;

    printf("Insira o valor de A:");
    scanf("%f", &A);
    printf("Insira o valor de B:");
    scanf("%f", &B);
    printf("Insira o valor de C:");
    scanf("%f", &C);

    delta = (B*B) - (4*A*C);

    if(delta < 0)
        printf("Impossível calcular");

    else

    x1 = (- B + sqrt(delta)) / (2*A) ;
    x2 = (- B - sqrt(delta)) / (2*A) ; 

    printf("X1 = %f\nX2 = %f", x1, x2);

    return 0;
}