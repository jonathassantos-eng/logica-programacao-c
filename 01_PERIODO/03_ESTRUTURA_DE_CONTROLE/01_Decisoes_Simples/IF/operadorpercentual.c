#include <stdio.h>

int main (){
    int numero = 4, resultado;

    resultado = numero % 2; // O operador percentual (%) é usado para calcular o resto da divisão de um número por outro. Neste caso, ele calcula o resto da divisão de 'numero' por 2.

    printf("A Valor do resultado é: %d\n", resultado);

    if (numero % 2 == 0){
        printf("O numero é par\n");
    }

}