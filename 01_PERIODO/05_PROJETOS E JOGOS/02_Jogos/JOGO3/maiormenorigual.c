#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    //Início do Jogo
    printf(" ===== MAIOR, MENOR, IGUAL ===== \n");
    printf("Bem-vindo a Jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação...\n");
    printf("-\n");
    printf("-\n");
    printf("M. MAIOR\n");
    printf("N. MENOR\n");
    printf("I. IGUAL\n");

    printf("\nEscolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("\nEscolha um número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("\nVocê escolheu a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
    break;
    case 'N':
    case 'n':
        printf("\nVocê escolheu a opção menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        printf("O número do Computador é: %d\n", numeroComputador);
    break;

    case 'I':
    case 'i':
         printf("\nVocê escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
    break;
    default:
        printf("Opção Inválida!\n");
    }
     printf("\nO número do Computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("\nParabéns, você venceu!\n");
    } else {
        printf("\nInfelizmente, você perdeu!\n");
    }



    
}