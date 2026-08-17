#include <stdio.h>

int main (){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido para float automaticamente

    printf("Resultado: %.2f\n", resultado); // Apresenta o resultado com 2 casas decimais

    return 0;
}