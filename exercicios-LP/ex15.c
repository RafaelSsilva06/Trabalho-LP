#include <stdio.h>


int main() {
    float num1, num2;


    printf("digite o primeiro valor:");
    scanf("%f", &num1);


    printf("digite o segundo valor:");
    scanf("%f", &num2);


    if (num1 == num2){
        printf("os dois numeros sao iguais");
    }
    else if (num1 > num2){
        printf("o primeiro valor e maior");
    }
    if (num1 < num2){
        printf("o segundo numero e maior");
    }
    return 0;
}
