#include <stdio.h>


int main() {
    float altura, largura, comprimento, area;
    int caixas;


    printf("Informe a altura do comodo:");
    scanf("%f", &altura);


    printf("Informe a largura do comodo:");
    scanf("%f", &largura);


    printf("Informe o comprimento do comodo:");
    scanf("%f", &comprimento);
   
    area = 2*(altura * largura) + 2*(altura * comprimento);


    caixas = area / 1,5;


    printf("a quantidade de caixas de azuleijo e:%.f", caixas);


    return 0;
}
