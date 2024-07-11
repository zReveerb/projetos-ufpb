#include <stdio.h>
int main (void){

    int nota100,nota50,nota20,nota10,nota5,nota2,nota1,resto,valor;
    printf("Qual o valor de saque desejado?\n");
    scanf("%d",&valor);
    nota100 = valor/100;
    resto = valor%100;
    nota50 = resto/50;
    resto = resto%50;
    nota20 = resto/20;
    resto = resto%20;
    nota10 = resto/10;
    resto = resto%10;
    nota5 = resto/5;
    resto = resto%5;
    nota2 = resto/2;
    resto = resto%2;
    nota1 = resto/1;
    printf("Quantidade de cedula de cada tipo de modo mais eficiente:\n");
    printf("notas de 100: %d\n", nota100);
    printf("notas de 50: %d\n", nota50);
    printf("notas de 20: %d\n", nota20);
    printf("notas de 10: %d\n", nota10);
    printf("notas de 5: %d\n", nota5);
    printf("notas de 2: %d\n", nota2);
    printf("notas de 1: %d\n", nota1);
    return 0;
}
