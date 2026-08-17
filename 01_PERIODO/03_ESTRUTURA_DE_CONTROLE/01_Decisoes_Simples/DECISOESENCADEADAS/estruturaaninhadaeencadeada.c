#include <stdio.h>

int main(){

    int condicao1, condicao2;

    //estrutura aninhada: if dentro de if
    if (condicao1) {
        if(condicao2) {
            //Código a ser executado se as duas condições forem verdadeiras
        }

        //estrutura encadeada
        if (condicao1) {
            //Código a ser executado se a condição 1 for verdadeira
        } else if (condicao2) {
            //Código a ser executado se a condição 1 for falsa e a condição 2 for verdadeira
        } else {
            //Código a ser executado se ambas as condições forem falsas
        }
    }
}