#include <stdio.h>
int main(void){

int a, b;

    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);

    if (a <= b){
        printf("O menor número é: %d", a);
    }
    else {
        printf ("O menor número eh:%d", b);
   }
        return 0;


    }
