#include <stdio.h>

int main(){
    printf("Tamanho de um int: %u bytes\n", sizeof(int)); // Imprime o tamanho de um int em bytes.
    printf("Tamanho de um long int: %u bytes\n", sizeof(long int)); // Imprime o tamanho de um long int em bytes.
    printf("Tamanho de um long long int: %u bytes\n", sizeof(long long int)); // Imprime o tamanho de um long long int em bytes.
    printf("Tamanho de double: %u bytes\n", sizeof(double)); // Imprime o tamanho de um double em bytes.
    printf("Tamanho de long double: %u bytes\n", sizeof(long double)); // Imprime o tamanho de um long double em bytes.
    return 0;
}