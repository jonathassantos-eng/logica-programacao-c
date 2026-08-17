#include <stdio.h>

int main(){
// DECLARAÇÃO DE VARIÁVEIS
    int a = 20; // Declara que a variável 'a' é do tipo inteiro e atribui o valor 20 a ela.
    int b = 20; // Declara que a variável 'b' é do tipo inteiro e atribui o valor 20 a ela.

// USO DE OPERADORES RELACIONAIS
    printf("a > b: %d\n", a > b); // Compara se 'a' é maior que 'b' e imprime o resultado (0 para falso, 1 para verdadeiro).
    printf("a < b: %d\n", a < b); // Compara se 'a' é menor que 'b' e imprime o resultado (0 para falso, 1 para verdadeiro).
    printf("a == b: %d\n", a == b); // Compara se 'a' é igual a 'b' e imprime o resultado (0 para falso, 1 para verdadeiro).
    printf("a != b: %d\n", a != b); // Compara se 'a' é diferente de 'b' e imprime o resultado (0 para falso, 1 para verdadeiro).

    return 0; // Indica que o programa terminou com sucesso.
}