#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    //Criança < 12
    //Adolescente 12<= x < 18
    //Adulto 18 <= x < 60
    //Idoso >= 60

    if(idade >= 60){
        printf("Você é Idoso!");
    } else if(idade >= 18 && idade < 60){
        printf("Você é um Adulto!");
    } else if(idade >= 12 && idade <18){
        printf("Você é um adolescemte!");
    } else {
        printf("Você é uma criança!");
    }
    
}

