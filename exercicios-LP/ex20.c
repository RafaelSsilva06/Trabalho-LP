#include <stdio.h>


int main() {
    float a, b, c;


    printf("Digite tres valores diferentes:\n");
    scanf("%f %f %f", &a, &b, &c);


    if (a > b && a > c) {
        if (b > c)
            printf("Ordem decrescente: %.2f %.2f %.2f\n", a, b, c);
        else
            printf("Ordem decrescente: %.2f %.2f %.2f\n", a, c, b);
    }
    else if (b > a && b > c) {
        if (a > c)
            printf("Ordem decrescente: %.2f %.2f %.2f\n", b, a, c);
        else
            printf("Ordem decrescente: %.2f %.2f %.2f\n", b, c, a);
    }
    else {
        if (a > b)
            printf("Ordem decrescente: %.2f %.2f %.2f\n", c, a, b);
        else
            printf("Ordem decrescente: %.2f %.2f %.2f\n", c, b, a);
    }


    return 0;
}
