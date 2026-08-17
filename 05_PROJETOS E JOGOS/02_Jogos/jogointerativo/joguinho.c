#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int opcao;
    int numeroSecreto, palpite;
    int regras;
    int alternativa;
    
    printf("==========MENU PRINCIPAL==========\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver Regras\n");
    printf("3 - Sair\n");
    printf("==================================\n");
    printf("Escolha uma opção: ");
    scanf(" %d", &opcao);
    printf("==================================\n");

    switch (opcao){
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);

        if (numeroSecreto == palpite){
            printf("Você acertou!\n");
        } else {
            printf("Você errou!\n");
        }
        printf("O Número Secreto era: %d\n", numeroSecreto);
    break;
    case 2:
        printf("\n=================== REGRAS DO JOGO ===================\n");
        printf("1. Regras da jogatína!\n");
        printf("2. Políticas de privacidade!\n");
        printf("3. Política de uso de dados\n");
        printf("4. Mais sobre a Progames\n");
        printf("Qual regra vc quer ver? ");
        scanf("%d", &regras);

        switch (regras){
        case 1:
           printf("\n--- REGRAS DA JOGATINA ---\n");
            printf("1. O computador escolhe um numero secreto aleatorio entre 0 e 9.\n");
            printf("2. Voce tem apenas 1 tentativa para acertar.\n");
            printf("3. Se acertar, voce ganha. Se errar, o numero e revelado.\n");
        break;

        case 2:
            printf("\n--- POLITICAS DE PRIVACIDADE ---\n");
            printf("Seus palpites sao processados localmente na sua maquina.\n");
            printf("Nao coletamos informacoes pessoais nem salvos historicos de jogos.\n");
        break;

        case 3:
            printf("\n--- POLITICA DE USO DE DADOS ---\n");
            printf("Este jogo nao armazena cookies, nao se conecta a internet\n");
            printf("e utiliza a memoria RAM apenas durante a execucao.\n");
        break;

        case 4:
        printf("\n--- SOBRE A PROGAMES ---\n");
            printf("A Progames e uma desenvolvedora focada em jogos leves,\n");
            printf("divertidos e transparentes para a comunidade Dev.\n");
        break;

        default:
            printf("Essa opção não é válida, por favor, escolha uma das opções acima!\n");
        }
    break;

    case 3:
        printf("\n------SAIR DO JOGO------\n");
        printf("Você tem certeza que deseja sair?\n");
        printf("1 - SIM\n");
        printf("2 - NÃO\n");

        scanf("%d", &alternativa);

        switch (alternativa){
        case 1:
            printf("Saindo do Jogo...\n");
        break;
        case 2:
            printf("Voltando para o menu principal!\n");
        break;
        default:
            printf("\nOpção Inválida! Por favor. escolha uma das opções acima!\n");
        }

    break;
    default:
        printf("Opção inválida! Por favor, escolha uma opção válida.\n");
    }

}