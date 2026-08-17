#include <stdio.h>

int main(){
    int a = 10;
    float b = 3;
                    // armazenar a divisão de 'a' por 'b' em uma variável do tipo float
    float quociente = (float) a / b; // Conversão explícita de 'a' para float
                   // casting de 'a' para float para garantir que a divisão seja realizada com precisão de ponto flutuante

    printf("Quociente: %.2f\n", quociente);

    //usar double para maior precisão em cálculos de ponto flutuante

    return 0;

}