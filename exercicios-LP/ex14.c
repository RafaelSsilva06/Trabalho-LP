#include <stdio.h>


int main() {
    float comprimentoPista, consumo;
    int voltasTotais, reabastecimentos;
    float voltasTrecho, distanciaMetros;
    float distanciaKm, litrosNecessarios;


    printf("Informe o comprimento da pista (em metros): ");
    scanf("%f", &comprimentoPista);


    printf("Informe o numero total de voltas: ");
    scanf("%d", &voltasTotais);


    printf("Informe o numero de reabastecimentos desejados: ");
    scanf("%d", &reabastecimentos);


    printf("Informe o consumo do carro (Km/L): ");
    scanf("%f", &consumo);


    // voltas até o primeiro reabastecimento
    voltasTrecho = voltasTotais / (reabastecimentos + 1.0);


    // distância percorrida
    distanciaMetros = voltasTrecho * comprimentoPista;
    distanciaKm = distanciaMetros / 1000;


    // litros necessários
    litrosNecessarios = distanciaKm / consumo;


    printf("\nLitros minimos ate o primeiro reabastecimento: %.2f L\n",
           litrosNecessarios);


    return 0;
}
