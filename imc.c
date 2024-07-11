#include <stdio.h>

int main(void)
{
    float peso;
    float altura;
    float imc;
    printf("qual a sua altura? ");
    scanf("%f", &altura);
    puts("");
    printf("qual o seu peso? ");
    scanf("%f", &peso);
    imc = peso/(altura*altura);
    printf("o seu imc eh: %.2f", imc);
    puts("");    
    return 0;
}
