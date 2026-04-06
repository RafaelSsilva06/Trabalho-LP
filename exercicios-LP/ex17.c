#include <stdio.h>


int main() {
    float perimetro, area, comprimento;
    int lado;


    printf("Digite a quantidade de lados");
    scanf("%d", &lado);


    printf("digite o comprimento do lado");
    scanf("%f", &comprimento);


    if(lado == 3){
        perimetro = comprimento * 3;
        printf("triangulo\n");
        printf("O perimetro e: %.f", perimetro);
    }
        else if(lado == 4){
        area = comprimento * comprimento;
        printf("quadrado\n");
        printf("a area e: %.f\n", area);
    }
        else if(lado == 5){
        printf("pentagono");
    }
    return 0;
}
