#include <stdio.h>


int main() {
    float raio, area;


    printf("Informe o raio da circunferencia:");
    scanf("%f", &raio);


    area = (raio * raio)* 3.14;


    printf("A area da circunferencia e: %.f", area);
    return 0;
}
