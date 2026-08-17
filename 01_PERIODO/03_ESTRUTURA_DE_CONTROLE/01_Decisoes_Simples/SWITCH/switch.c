#include <stdio.h>

int main (){
    char variavel;

    printf("Digite um valor: \n");
    scanf(" %c", &variavel);

    switch (variavel){
        case 'a':
            //bloco de código a ser executado se variavel for igual a valor1
            printf("Código a ser executado se variavel == 'a'\n");
            printf("Teste do case 'a'");
        break; //o break é usado para parar a execução do switch após o caso correspondente ser encontrado. Se o break for omitido, a execução continuará para os casos seguintes, mesmo que eles não correspondam ao valor da variável.
        case 'b':
            //bloco de código a ser executado se variavel for igual a valor2
            printf("Código a ser executado se variavel == 'b'\n");
        break;
        default:
            //bloco de código a ser executado se variavel não for igual a nenhum dos casos anteriores
            printf("Código a ser executado se variavel não for igual a 'a' ou 'b'\n");
    }

}  // vimos um exemplo genérico de como usar a estrutura switch-case em C. O switch é uma alternativa ao uso de múltiplos if-else quando se tem várias condições a serem verificadas com base no valor de uma variável. Ele torna o código mais organizado e legível, especialmente quando há muitos casos a serem tratados.