#include <stdio.h>
int main (){
    int a = 0; // Declaração e inicialização de uma variável inteira 'a' com o valor 0.
    
    
    if(!a) // O operador lógico NOT (!) é usado para verificar se 'a' é igual a 0. Se 'a' for 0, a expressão '!a' será verdadeira, e o bloco de código dentro do if será executado.
    {
        printf("a variável a é zero. \n");
    } else {
        printf("A variável é diferente de zero. \n");
    }
    
}