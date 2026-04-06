#include <stdio.h>


int main() {
    float custoFab, custoCons;


    printf("Infome o custo de fabricçao do carro:");
    scanf("%f", &custoFab);


    custoCons = custoFab +(custoFab * 45)/100 +(custoFab * 28)/100;


    printf("O custo final para o consumidor e: %.f", custoCons);


    return 0;
}

