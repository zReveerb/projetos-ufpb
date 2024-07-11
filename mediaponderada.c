#include <stdio.h>

int main (void){

    float bimestre1, bimestre2, bimestre3, bimestre4, mediaPonderada;

    printf("Qual a sua nota no primeiro bimestre?\n");
    scanf("%f", &bimestre1);
    printf("Qual a sua nota no segundo bimestre?\n");
    scanf("%f", &bimestre2);
    printf("Qual a sua nota no terceiro bimestre?\n");
    scanf("%f", &bimestre3);
    printf("Qual a sua nota no quarto bimestre?\n");
    scanf("%f", &bimestre4);
    mediaPonderada =  ((bimestre1*1.0)+(bimestre2*2)+(bimestre3*3)+(bimestre4*4.0))/(4+3+2+1);
    printf("Sua media final eh:%.2f", mediaPonderada);
    return 0;
}
