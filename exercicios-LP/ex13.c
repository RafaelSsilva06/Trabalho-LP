
#include <stdio.h>


int main() {
    float kmInicial, kmFinal, litros;
    float valorRecebido;
    float distancia, consumoMedio;
    float gastoCombustivel, lucro;


    printf("Informe o km inicial do odometro: ");
    scanf("%f", &kmInicial);


    printf("Informe o km final do odometro: ");
    scanf("%f", &kmFinal);


    printf("Informe os litros de combustivel gastos: ");
    scanf("%f", &litros);


    printf("Informe o valor recebido dos passageiros: ");
    scanf("%f", &valorRecebido);


    distancia = kmFinal - kmInicial;
    consumoMedio = distancia / litros;
    gastoCombustivel = litros * 2.90;
    lucro = valorRecebido - gastoCombustivel;


    printf("\nConsumo medio: %.2f Km/L\n", consumoMedio);
    printf("Lucro liquido do dia: R$ %.2f\n", lucro);


    return 0;
}
