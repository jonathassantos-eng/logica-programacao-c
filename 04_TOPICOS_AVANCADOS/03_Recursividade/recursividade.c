#include <stdio.h>


int main (){

    int index;

    char * nomeAlunos{
        ("Aluno 0", "Pt: 30", "Mat: 90"),
        ("Aluno 1", "Pt 60", "Mat: 60"),
        ("Aluno 2", "Pt 90", "Mat: 30")

    }

    printf("Digite o númeo do Aluno que queira ver...\n\n");

    printf("Para o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");

    printf("Escolha... ");
    scanf("%d", &index);

    printf("As notas do %s , %s... \n", nomeAlunos[index][0], nomeAlunos[index][1], nomeAlunos[index][2])

    return 0;
}