#include <stdio.h>

int main(void)
{
    float diametro;
    float raio;
    float perimetro;
    float area;

    printf("calculo do raio, perimetro e area\n");
    printf("qual eh o diametro?");
    scanf("%f", &diametro);
    raio = (diametro)/2;
    printf("raio eh: %.2f", raio);
    puts("");
    perimetro = 2*raio*3.14;
    printf("perimetro eh:%.2f", perimetro);
    area = 3.14*raio*raio;
    puts("");
    printf("a area do circulo eh:%.2f\n", area);
    return 0;

}
