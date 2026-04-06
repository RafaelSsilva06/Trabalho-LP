#include <stdio.h>


int main() {
    int Eleitores, Brancos, Nulos, Validos;
    float percNulos, percBrancos, percValidos;


    printf("Informe a quantidade de eleitores no municipio:");
    scanf("%d", &Eleitores);


    printf("Informe a quantidade de votos brancos:");
    scanf("%d", &Brancos);


    printf("Informe a quantidade de votos nulos:");
    scanf("%d", &Nulos);


    printf("Informe a quantidade de votos validos:");
    scanf("%d", &Validos);


    percBrancos = (Brancos * 100.0) / Eleitores;
    percNulos = (Nulos * 100.0) / Eleitores;
    percValidos = (Validos * 100.0) / Eleitores;


    printf("\nPercentual de votos brancos: %.2f\n", percBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);
    printf("Percentual de votos validos: %.2f%%\n", percValidos);




    return 0;
}
