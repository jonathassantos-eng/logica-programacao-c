//Operadores Lógicos
#include <stdio.h>

int main (){
    int numero1 = 5;
    int numero2 = 10;

    // Operador lógico AND (&&): Retorna verdadeiro se ambas as condições forem verdadeiras.
    if (numero1 < numero2 && numero1 > 0) {
        printf("Ambas as condições são verdadeiras: numero1 é menor que numero2 e maior que 0.\n");
    }

    // Operador lógico OR (||): Retorna verdadeiro se pelo menos uma das condições for verdadeira.
    if (numero1 < numero2 || numero1 < 0) {
        printf("\n Pelo menos uma das condições é verdadeira: numero1 é menor que numero2 ou menor que 0.\n");
    }

    // Operador lógico NOT (!): Inverte o valor lógico de uma condição.
    if (!(numero1 > numero2)) {
        printf("\n A condição 'numero1 > numero2' é falsa, então a negação é verdadeira.\n");
    }

    return 0;
}