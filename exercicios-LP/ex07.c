#include <stdio.h>


int main() {
    float ValorVend, SalarioFix, ValorpCarro, SalarioTotal;
    int carrosVend;


    printf("Informe a quantidade de carros vendidos:");
    scanf("%d", &carrosVend);


    printf("Informe o valor de suas vendas:");
    scanf("%f", &ValorVend);


    printf("Informe o salario fixo:");
    scanf("%f", &SalarioFix);


    printf("Informe o valor recebido por cada carro vendido:");
    scanf("%f", &ValorpCarro);


    SalarioTotal = SalarioFix + (ValorVend * 5)/100 + (carrosVend * ValorpCarro);


    printf("O seu salario total e:%.2f", SalarioTotal);


   
    return 0;
}
