#include <stdio.h>


int main() {
    float a, b, c;


    printf("Digite o valor dos 3 angulos:");
    scanf("%f %f %f", &a, &b, &c);


    if(a==90 || b==90 || c==90){
        printf("TRIANGULO RETANGULO:");
    }
    else if(a>90 || b>90 || c>90){
        printf("TRIANGULO OBTUSO");
    }
    else if(a<90 || b<90 || c<90){
        printf("TRIANGULO AGUDO ");
    }
    return 0;
}
