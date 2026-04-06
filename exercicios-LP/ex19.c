#include <stdio.h>


int main() {
   int num1, num2, operacao, adicao, subtracao, divisao, multiplicacao;


    printf("Digit o primeiro valor:");
    scanf("%d", &num1);


    printf("Digite o segundo valor:");
    scanf("%d", &num2);


    printf("Escolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &operacao);


    if(operacao == 1){
        adicao = num1 + num2;
        printf("O resultado da adicao e: %d", adicao);
    }
    else if (operacao == 2){
        subtracao = num1 - num2;
        printf("O resultado da subtracao e: %d", subtracao);
    }
    else if(operacao == 3){
        multiplicacao = num1 * num2;
        printf("O resultado da multiplicacao e: %d", multiplicacao);
    }
    else if (operacao == 4){
        divisao = num1/num2;
        printf("O resultado da divisao e: %d", divisao);
    }




    return 0;
}
