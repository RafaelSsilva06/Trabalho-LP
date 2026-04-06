#include <stdio.h>


int main() {
    float lado, Area;


    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);


    Area = lado * lado;


    printf("Valor da area: %.2f m\n", Area);


    return 0;
}
