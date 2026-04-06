#include <stdio.h>


int main() {
    float perimetro, area, medida;
    int lados;


    printf("Digite a quantidade de lados");
    scanf("%d", &lados);


    printf("digite o comprimento do lado");
    scanf("%f", &medida);


    if (lados < 3) {
        printf("nao e um poligono\n");
    }
    else if (lados == 3) {
        perimetro = 3 * medida;
        printf("triangulo\n");
        printf("Perimetro: %.2f cm\n", perimetro);
    }
    else if (lados == 4) {
        area = medida * medida;
        printf("quadrado\n");
        printf("Area: %.2f cm²\n", area);
    }
    else if (lados == 5) {
        printf("pentagono\n");
    }
    else {
        printf("poligono nao idetnficado\n");
    }


    return 0;
}
