#include <stdio.h>


int main() {
    float SalarioHora, HorasT, SalarioTotal;


    printf ("Informe o seu salario por hora:");
    scanf("%f", &SalarioHora);


    printf("Informe a quantidade de horas trabalhadas:");
    scanf("%f", &HorasT);


    SalarioTotal = SalarioHora * HorasT;


    printf("Seu salario total e: %.2f \n", SalarioTotal);


   
    return 0;
}
