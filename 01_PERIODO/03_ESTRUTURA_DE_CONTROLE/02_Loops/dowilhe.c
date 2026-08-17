#include <stdio.h>

int main (){
    int numero;

    do {
        printf("DIGITE UM NÚMERO PAR PARA SAIR D PROGRMANA...");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d é par!\n", numero);
        } else {
            printf("%d é ímpar!\n", numero);
        }
    } while (numero % 2 != 0);

    printf("Você digitou um número par! Saindo do programa...");

    return 0;
}