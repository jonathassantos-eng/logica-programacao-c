#include <stdio.h>

int main(){
    short int numeroPequeno = 32767; // Este valor é o limite máximo para de short int.
    printf("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // Este valor excede o limite máximo de short int.
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

     printf("\n*** Tamanho das variáveis ***\n");
     printf("Short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(int), sizeof(short int), sizeof(long int)); // Imprime o tamanho de int, short int e long int em bytes.
     printf("Float: %lu B - double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double)); // Imprime o tamanho de float, double e long double em bytes.

    return 0;
}