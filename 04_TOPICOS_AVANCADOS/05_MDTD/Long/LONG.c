#include <stdio.h>

int main(){
    int numeroNormal = 214783647; // Este valor é o limite máximo para um int em muitos sistemas (2.147.483.647).
    long long int numeroGrande = 2147483647;

    printf("Número normal (int): %d\n", numeroNormal); // Imprime o número normal.
    printf("Número grande (long long int): %lld\n", numeroGrande); // Imprime o número grande usando o especificador de formato para long long int.

    numeroGrande = 2147483648; // Este valor excede o limite máximo de um int, mas é válido para long long int.
    printf("Número grande atualizado (long long int): %lld\n", numeroGrande); // Imprime o número grande atualizado.
    printf("Número grande atualizado (long long int): %lld\n", numeroGrande); // Imprime o número grande atualizado.

    return 0;
}