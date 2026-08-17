#include <stdio.h>

int main(){

    int idade;
    int dependentes;
    float renda;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    // A primeira condição verifica se a idade está entre 18 e 65 anos, usando o operador lógico AND (&&). Se essa condição for verdadeira, o programa entra no primeiro bloco de código.
    // A Segunda condição verifica se a renda mensal é inferior a R$ 3000,00. Se essa condição também for verdadeira, o programa entra no segundo bloco de código.
    // A terceira condição verifica se o número de dependentes é maior que 2. Se essa condição for verdadeira, o programa entra no terceiro bloco de código.
    //

    if(idade >= 18 && idade < 65){

        if(renda < 3000){

            if(dependentes > 2){
                printf("Você atende a todos os critérios. \n");
            } else {
                printf("Você não atende ao critério de dependentes. \n");
            }

        } else {
            printf("Você não atende ao critério renda. \n");
        }


    } else {
        printf("Você não atende ao critério idade. \n");
    }

}