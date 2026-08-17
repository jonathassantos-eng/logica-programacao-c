#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("\n==== MENU DE GERENIAMENTO DE ESTUDANTES ====\n");
    printf(" 1. Calcular Média\n");
    printf(" 2. Determinar Status\n");
    printf(" 3. Sair\n");
    printf(" Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("====== CALCULAR MÉDIA =====\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
// Testar se a condição se a nota pe >= 0 e <= 10
    if ( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) )
    {
        media = (nota1 + nota2) / 3;
        printf("A média das notas é: %.2f\n", media);
    } else {
        printf("Entrada com valores de notas inválidos!\n");
    }
    break;
    case 2:
        printf(" ==== DETERMINAR STATUS ==== \n");
        printf(" Digite a média: ");
        scanf("%f", &media);
        // media >= 5 ? printf("Aprovado!") : printf("Reprovado!");

        if (media >= 7)
        {
            printf("Aprovado!\n");
        } else if (media >= 5){
            printf("Recuperação!\n");
        } else{
            printf("Reprovado!\n");
        }
    break;
    case 3:
        printf("\n");
    break;
    default:
        printf("Opção inválida!\n");
    }




    
}