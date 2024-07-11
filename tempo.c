#include <stdio.h>

int main (void){

int periodo, horas, minutos, segundos, tempo;

    printf("Qual o período (em segundos) desejado?\n");
    scanf("%d", &periodo);

    horas = periodo/3600;
    tempo = periodo%3600;
    minutos = tempo/60;
    segundos = tempo%60;

    printf("O seu tempo  será: %d horas,  %d minutos e %d segundos\n", horas, minutos, segundos);
    return 0;
}
