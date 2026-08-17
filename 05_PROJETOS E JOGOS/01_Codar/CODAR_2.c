#include <stdio.h>

int main(){
    int nota1, nota2, nota3;
    float media;

    printf("====== Cálculo da Média =====\n");

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    media = ((float)(nota1 + nota2 + nota3)) / 3; // Cálculo da média usando divisão no ponto flutuante

    printf("A média das notas é: %.2f\n", media);

    return 0;
}