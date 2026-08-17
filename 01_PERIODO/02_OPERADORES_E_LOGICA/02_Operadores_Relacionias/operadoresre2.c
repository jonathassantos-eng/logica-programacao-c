#include <stdio.h>

int main(){
    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("x >= y: %d\n", x >= y); // Compara se 'x' é maior ou igual a 'y' e imprime o resultado (0 para falso, 1 para verdadeiro).
    printf("x == y: %d\n", x == y); // Compara se 'x' é igual a 'y' e imprime o resultado (0 para falso, 1 para verdadeiro).
    printf("x != y: %d\n", x != y); // Compara se 'x' é diferente de 'y' e imprime o resultado (0 para falso, 1 para verdadeiro).

    printf("x >= c: %d\n", x >= c); // Compara se 'x' é maior ou igual a 'c' e imprime o resultado (0 para falso, 1 para verdadeiro).
    printf("O valor ASCII de %c é %d\n", c, c); // Imprime o valor ASCII do caractere 'c'.

    return 0; // Indica que o programa terminou com sucesso.
}