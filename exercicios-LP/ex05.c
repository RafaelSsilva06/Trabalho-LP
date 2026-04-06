#include <stdio.h>


int main() {
    float salario, salarioReaj, Reajuste;


    printf("Informe o salario atual:");
    scanf("%f", &salario);


    printf("Informe o percentual de reajuste:");
    scanf("%f", &Reajuste);


    salarioReaj = salario + (salario * Reajuste)/100;


    printf("Esse e o salario reajustado: %.f\n", salarioReaj);


    return 0;
}
