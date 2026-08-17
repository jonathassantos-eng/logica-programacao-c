#include <stdio.h>

int main (){
    char letra;

    printf("Entre o valor da letra: \n");
    scanf(" %c", &letra);

    switch (letra){
    case 'a':
        printf("Domingo\n");
    break;
    case 'b':
        printf("Segunda-feira\n");
    break;
    case 'c':
        printf("Terça-feira\n");
    break;
    case 'd':
        printf("Quarta-feira\n");
    break;  
    case 'e':
        printf("Quinta-feira\n");
    break;
    case 'f':
        printf("Sexta-feira\n");
    break;
    case 'g':
        printf("Sábado\n");
    break; 
    default:
        printf("Valor inválido! Por favor, entre um número entre 1 e 7.\n");
    }
}