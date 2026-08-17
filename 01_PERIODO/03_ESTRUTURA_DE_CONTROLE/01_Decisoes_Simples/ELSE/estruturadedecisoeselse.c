#include <stdio.h>

int main (){
    int numero1, numero2;

    numero1 = 10;
    numero2 = 50;

    if (numero1 > numero2){ // se a condição for verdadeira, o bloco de código dentro do if será executado
        printf("O numero 1 é maior que o numero 2\n");
    
    } else {  // se a condição for falsa, o bloco de código dentro do else será executado
        printf("O numero 2 é maior ou igual ao numero 1\n");
    }

}