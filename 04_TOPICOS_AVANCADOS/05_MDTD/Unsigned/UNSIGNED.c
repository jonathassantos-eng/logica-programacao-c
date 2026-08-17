#include <stdio.h>

int main(){
    int numeroSinal = 3000000000; // Este valor excede o limite máximo de um int, causando um estouro de inteiro (integer overflow).
    unsigned int numeroSemSinal = 3000000000; // Este valor é válido para um unsigned int, pois ele pode armazenar valores de 0 a 4.294.967.295.

    printf("Número com sinal (estouro de inteiro): %d\n", numeroSinal); // O resultado pode ser um número negativo devido ao estouro.
    printf("Número sem sinal: %u\n", numeroSemSinal); // O resultado será 3000000000, pois é um valor válido para unsigned int.


}
