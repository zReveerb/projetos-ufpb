#include <stdio.h>

int main() 
{
    float nota1, nota2, nota3;
    float media;

    printf("media das notas da disciplina\n");
    printf("qual foi sua primeira nota? ");
    scanf("%f", &nota1);
    printf("qual foi a sua segunda nota? ");
    scanf("%f", &nota2);
    printf("qual foi a sua terceira nota? ");
    scanf("%f", &nota3);
    media = (nota1+nota2+nota3)/3;
    printf("media: %.2f\n", media);

9    return 0;
}
