#include <stdio.h>

int main () {
    int idade;
    float altura;
    char opcao;
    char nome[24];
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("O nome é: %s\n", nome);

    printf ("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A Altura é: %f\n", altura);

    printf(" Digite a opção: ");
    scanf(" %c", &opcao);
    printf("O nome é: %c", opcao);


}