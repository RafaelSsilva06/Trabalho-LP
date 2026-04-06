#include <stdio.h>


int main() {
    float nota1, nota2, nota3, mediaPond;


    printf("Informe a sua primeira nota:");
    scanf("%f", &nota1);


    printf("Informe a sua segunda nota:");
    scanf("%f", &nota2);


    printf("Informe a sua terceira nota:");
    scanf("%f", &nota3);


    mediaPond = ((nota1 * 2)+(nota2 * 3)+(nota3 * 5))/10;


    printf("A sua media ponderada e: %.2f", mediaPond);


    return 0;
}
