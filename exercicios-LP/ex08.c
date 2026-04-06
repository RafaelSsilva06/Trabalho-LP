#include <stdio.h>


int main() {
    float F, C;


    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);


    C = (5 * (F - 32)) / 9;


    printf("Temperatura em Celsius: %.2f\n", C);


    return 0;
}
