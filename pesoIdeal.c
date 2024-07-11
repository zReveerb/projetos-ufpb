#include <stdio.h>

int main (void){

char sexo;
float altura, pesoIdeal;

    printf("Digite o seu sexo (m ou f):\n");
    scanf("%c", &sexo);

    printf("Digite a sua altura (em metros):\n");
    scanf("%f",  &altura);

    if (sexo == 'm'){
        pesoIdeal = (72.7*altura)-58;
        printf("O seu peso ideal é:%f\n", pesoIdeal);
        return 0;
    }
    else (sexo == 'f');
{
        pesoIdeal = (62.1*altura) - 44.7;
        printf("O seu peso ideal é:%f\n", pesoIdeal);
        return 0;

}}
