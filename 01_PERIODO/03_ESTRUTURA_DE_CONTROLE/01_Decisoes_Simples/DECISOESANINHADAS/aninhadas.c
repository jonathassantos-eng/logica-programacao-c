#include <stdio.h>

int main(){

    int idade;
    float renda;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);

    /*
    programa para verificar se a pessoa é elegível para um desconto considerando as seguintes condições:
- A pessoa deve ter idade igual ou superior a 18 anos. 
- A renda mensal da pessoa deve ser inferior a R$ 2000,00.
    */

    if(idade < 18 && idade <= 60) //usamos o operador lógico AND (&&) para verificar se a idade está entre 18 e 60. Se ambas as condições forem verdadeiras, o bloco de código dentro do if será executado.
    {
        if(renda < 2000.00) //Dentro do primeiro if, temos outro if que verifica se a renda mensal é inferior a R$ 2000,00. Se essa condição também for verdadeira, o bloco de código dentro desse if será executado.
        {
            printf("Você é elegível para o desconto! \n");
        } else {
            printf("Você não é elegível para o desconto devido à sua renda mensal. \n");
        }
    } else {
        printf("Você não é elegível para o desconto devido à sua idade. \n");
    }
}