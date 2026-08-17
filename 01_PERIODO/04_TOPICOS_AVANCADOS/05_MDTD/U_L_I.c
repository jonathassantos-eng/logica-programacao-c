#include <stdio.h>

int main(){
    unsigned long int numeroGrandePositivo = 4000000000; // Este valor é um número inteiro grande positivo usando o tipo unsigned long int. 
    unsigned int numeroPositivo = 4000000000; // Este valor é um número inteiro positivo usando o tipo unsigned int.
    long int numeroGrande = 4000000000; // Este valor é um número inteiro grande usando o tipo long int.
    int numeroNormal = 4000000000; // Este valor é um número inteiro normal usando o tipo int, mas pode causar um estouro de inteiro (integer overflow) dependendo do sistema.

    printf("Número positivo grande (unsigned long int): %lu\n", numeroGrandePositivo);
    printf("Número positivo (unsigned int): %u\n", numeroPositivo);
    printf("Número grande (long int): %lld\n", numeroGrande);
    printf("Número normal (int): %d\n", numeroNormal); // O resultado pode ser um número negativo devido ao estouro.

    return 0;
}