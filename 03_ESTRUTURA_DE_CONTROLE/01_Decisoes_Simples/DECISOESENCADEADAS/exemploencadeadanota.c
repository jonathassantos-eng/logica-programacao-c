#include <stdio.h>

int main(){
    int nota;

    printf("Digite sua Nota: ");
    scanf("%d", &nota);

    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //E >= 50
    //F

    if(nota < 50){
        printf("Você está com a nota F!");

    } else if(nota <= 50 && nota < 60){
        printf("Você está com a nota E!");

    } else if(nota <= 60 && nota < 70){
        printf("Você está coma a nota D!");

    } else if(nota <= 70 && nota < 80){
        printf("Você está com a nota C!");
    
    } else if(nota <= 80 && nota < 90){
        printf("Você está com a nota B!");

    } else{
        printf("Sua nota é A!");
    }
    
}