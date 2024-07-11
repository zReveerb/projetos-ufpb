#include <stdio.h>
#include <math.h>

int main (void){

float a, b, c, x1, x2, delta;

    printf("Digite o valor de a:\n");
    scanf("%f", &a);

    if (a == 0){
        printf ("ops, não eh uma funcao de segundo grau");
        return 1;
    }
    printf("Digite o valor de b:\n");
    scanf("%f", &b);
    printf("Digite o valor de c:\n");
    scanf("%f", &c);

    delta = (b*b)-4*a*c;

    if (delta < 0){
        printf("Sua solucao nao tem raizes nos numeros reais");
        return 2;
    }
    x1 = ((-b)+sqrt(delta))/(2*a);
    x2 = ((-b)-sqrt(delta))/(2*a);
    printf("As raizes da sua funçao sao: %f %f", x1, x2);
    return 0;
    }
