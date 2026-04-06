#include <stdio.h>


int main() {
    float potencia, largura, comprimento, area, lampadas, potenciaNecessaria;


    printf("Informe a potencia da lampada:");
    scanf("%f", &potencia);


    printf("Informe a largura do comodo:");
    scanf("%f", &largura);


    printf("Informe o comprimento do comodo:");
    scanf("%f", &comprimento);
   
   
    area = comprimento * largura;
    potenciaNecessaria = area * 18;
    lampadas = potenciaNecessaria/potencia;


    printf("a quantidade de lampadas necessarias no comodo e:%.f", lampadas);


    return 0;
}
