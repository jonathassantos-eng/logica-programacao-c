#include <stdio.h>

int main(){
    double numeroPreciso = 3.141592653589793; // Este valor é um número de ponto flutuante de precisão dupla (double).
    long double numeroMui = 3.141592653589793238462643383; // Este value é um número de ponto flutuante de precisão múltipla (long double). 

    printf("Número preciso (double): %.15lf\n", numeroPreciso); // Imprime o número preciso usando o especificador de formato para double.
    printf("Número mui preciso (long double): %.21Lf\n", numeroMui); // Imprime o número mui preciso usando o especificador de formato para long double.

    return 0;
}
