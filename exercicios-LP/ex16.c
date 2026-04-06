#include <stdio.h>


int main() {
    float prova1, prova2, optativa, media;


    printf("Digite a nota da primeira prova:");
    scanf("%f", &prova1);


    printf("Digite a nota da segunda prova");
    scanf("%f", &prova2);


    printf("Digite a nota da prova optativa (caso nao tenha feiro, digite -1):");
    scanf("%f", &optativa);


    if (optativa != -1){
        if (prova1 < prova2);
        prova1 == optativa;
    }else{
        prova2 == optativa;
    }


    media = (prova1 + prova2)/2;


    if (media >= 6.0){
        printf("aluno aporvado");
    }
    else if (media < 3.0){
        printf("aluno reprovado");
    }
    else{
        printf("Aluno de exame");
    }


   
    return 0;
}
