#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Necessário para usar strcpy nas strings de atributos

int main() {
    
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    char estado1, estado2;
    char codigo_da_carta1[50], codigo_da_carta2[50];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int n_populacao1, n_populacao2;
    float area1, area2;
    double PIB1, PIB2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;
    
    int escolha, alternativa; 
    int ligado = 1; // Variável para manter o menu funcionando em loop

    // Variáveis para o Desafio Mestre
    int escolha_atributo1, escolha_atributo2;
    double val1_c1, val1_c2; // Valores do primeiro atributo escolhido
    double val2_c1, val2_c2; // Valores do segundo atributo escolhido
    char nome_atr1[50], nome_atr2[50]; // Nomes dos atributos escolhidos
    double soma_c1, soma_c2; // Soma final dos atributos
    int vencedor_soma; // 1 = Carta 1, 2 = Carta 2, 0 = Empate

        // --- MENU PRINCIPAL ---
        printf("\n========== MENU PRINCIPAL ==========\n\n");
        printf("   Bem vindo ao menu principal!   \n");
        printf("   Escolha a opção que deseja acessar   \n");
        printf(" 1 - Iniciar o jogo\n");
        printf(" 2 - Regras do jogo\n");
        printf(" 3 - Sair do Jogo\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // --- ENTRADA DE DADOS: CARTA 1 ---
                printf("\n====== Cadastro de Cartas do Jogo Super Trunfo ======\n\n");
                printf("Digite os dados da Carta 1:\n");

                printf("Estado (A-H): ");
                scanf(" %c", &estado1);
                printf("Código da Carta: ");
                scanf("%s", codigo_da_carta1);
                printf("Nome da Cidade: ");
                scanf(" %[^\n]", nome_da_cidade1);
                printf("População: ");
                scanf("%d", &n_populacao1);
                printf("Área: ");
                scanf("%f", &area1);
                printf("PIB: ");
                scanf("%lf", &PIB1);
                printf("Número de Pontos Turísticos: ");
                scanf("%d", &numero_de_pontos_turisticos1);

                printf("\n");

                // --- ENTRADA DE DADOS: CARTA 2 ---
                printf("Digite os dados da Carta 2:\n");

                printf("Estado (A-H): ");
                scanf(" %c", &estado2);
                printf("Código da Carta: ");
                scanf("%s", codigo_da_carta2);
                printf("Nome da Cidade: ");
                scanf(" %[^\n]", nome_da_cidade2);
                printf("População: ");
                scanf("%d", &n_populacao2);
                printf("Área: ");
                scanf("%f", &area2);
                printf("PIB: ");
                scanf("%lf", &PIB2);
                printf("Número de Pontos Turísticos: ");
                scanf("%d", &numero_de_pontos_turisticos2);

                printf("\n");

                // --- CÁLCULOS ---
                densidade_populacional1 = (float)n_populacao1 / area1;
                densidade_populacional2 = (float)n_populacao2 / area2;

                PIB_per_capita1 = (double)(PIB1 * 1000000000) / (float)n_populacao1;
                PIB_per_capita2 = (double)(PIB2 * 1000000000) / (float)n_populacao2;
                
                // --- MENU DE COMPARAÇÃO (PRIMEIRO ATRIBUTO) ---
                printf("\n### ESCOLHA O PRIMEIRO ATRIBUTO PARA BATALHA ###\n");
                printf(" 1 - População\n");
                printf(" 2 - Área\n");
                printf(" 3 - PIB\n");
                printf(" 4 - Número de Pontos Turísticos\n");
                printf(" 5 - Densidade Demográfica\n");
                printf("Escolha: ");
                scanf("%d", &escolha_atributo1);

                // Armazena os valores e o nome do primeiro atributo
                switch(escolha_atributo1) {
                    case 1: val1_c1 = n_populacao1; val1_c2 = n_populacao2; strcpy(nome_atr1, "População"); break;
                    case 2: val1_c1 = area1; val1_c2 = area2; strcpy(nome_atr1, "Área"); break;
                    case 3: val1_c1 = PIB1; val1_c2 = PIB2; strcpy(nome_atr1, "PIB"); break;
                    case 4: val1_c1 = numero_de_pontos_turisticos1; val1_c2 = numero_de_pontos_turisticos2; strcpy(nome_atr1, "Pontos Turísticos"); break;
                    case 5: val1_c1 = densidade_populacional1; val1_c2 = densidade_populacional2; strcpy(nome_atr1, "Densidade Demográfica"); break;
                    default: printf("Opção inválida. Usando População por padrão.\n"); val1_c1 = n_populacao1; val1_c2 = n_populacao2; strcpy(nome_atr1, "População"); escolha_atributo1 = 1; break;
                }

                // --- MENU DINÂMICO (SEGUNDO ATRIBUTO) ---
                printf("\n### ESCOLHA O SEGUNDO ATRIBUTO (Diferente do 1º) ###\n");
                if (escolha_atributo1 != 1) printf(" 1 - População\n");
                if (escolha_atributo1 != 2) printf(" 2 - Área\n");
                if (escolha_atributo1 != 3) printf(" 3 - PIB\n");
                if (escolha_atributo1 != 4) printf(" 4 - Número de Pontos Turísticos\n");
                if (escolha_atributo1 != 5) printf(" 5 - Densidade Demográfica\n");
                
                // Validação para garantir que não escolha o mesmo
                do {
                    printf("Escolha: ");
                    scanf("%d", &escolha_atributo2);
                    if (escolha_atributo2 == escolha_atributo1) {
                        printf("ERRO: Este atributo já foi escolhido! Tente outro.\n");
                    } else if (escolha_atributo2 < 1 || escolha_atributo2 > 5) {
                        printf("ERRO: Opção inválida.\n");
                    }
                } while (escolha_atributo2 == escolha_atributo1 || escolha_atributo2 < 1 || escolha_atributo2 > 5);

                // Armazena os valores e o nome do segundo atributo
                switch(escolha_atributo2) {
                    case 1: val2_c1 = n_populacao1; val2_c2 = n_populacao2; strcpy(nome_atr2, "População"); break;
                    case 2: val2_c1 = area1; val2_c2 = area2; strcpy(nome_atr2, "Área"); break;
                    case 3: val2_c1 = PIB1; val2_c2 = PIB2; strcpy(nome_atr2, "PIB"); break;
                    case 4: val2_c1 = numero_de_pontos_turisticos1; val2_c2 = numero_de_pontos_turisticos2; strcpy(nome_atr2, "Pontos Turísticos"); break;
                    case 5: val2_c1 = densidade_populacional1; val2_c2 = densidade_populacional2; strcpy(nome_atr2, "Densidade Demográfica"); break;
                }

                // --- PROCESSAMENTO: SOMA E COMPARAÇÕES AVANÇADAS ---
                soma_c1 = val1_c1 + val2_c1;
                soma_c2 = val1_c2 + val2_c2;

                // Uso de operador ternário para descobrir o vencedor da soma
                vencedor_soma = (soma_c1 > soma_c2) ? 1 : ((soma_c2 > soma_c1) ? 2 : 0);

                // --- EXIBIÇÃO CLARA DOS RESULTADOS ---
                printf("\n=======================================================\n");
                printf("                RESULTADO DA BATALHA                   \n");
                printf("=======================================================\n");
                printf("CARTA 1: %s (%c)\n", nome_da_cidade1, estado1);
                printf("CARTA 2: %s (%c)\n", nome_da_cidade2, estado2);
                printf("-------------------------------------------------------\n");
                
                // Exibe os valores do Atributo 1
                printf("Atributo 1: %s\n", nome_atr1);
                printf(" - %s: %.2lf\n", nome_da_cidade1, val1_c1);
                printf(" - %s: %.2lf\n", nome_da_cidade2, val1_c2);
                
                // Exibe os valores do Atributo 2
                printf("\nAtributo 2: %s\n", nome_atr2);
                printf(" - %s: %.2lf\n", nome_da_cidade1, val2_c1);
                printf(" - %s: %.2lf\n", nome_da_cidade2, val2_c2);
                printf("-------------------------------------------------------\n");
                
                // Exibe a Soma
                printf("SOMA DOS ATRIBUTOS:\n");
                printf(" - %s: %.2lf\n", nome_da_cidade1, soma_c1);
                printf(" - %s: %.2lf\n", nome_da_cidade2, soma_c2);
                printf("\n");

                // Declara o vencedor usando o resultado do operador ternário
                if (vencedor_soma == 1) {
                    printf(">>> VENCEDOR: CARTA 1 (%s) venceu a rodada! <<<\n", nome_da_cidade1);
                } else if (vencedor_soma == 2) {
                    printf(">>> VENCEDOR: CARTA 2 (%s) venceu a rodada! <<<\n", nome_da_cidade2);
                } else {
                    printf(">>> RESULTADO: EMPATE! As duas cartas possuem a mesma soma. <<<\n");
                }
                printf("=======================================================\n");

                break; // Fim do Case 1 (Jogo)
            
            case 2:
                printf("\n====== REGRAS DO JOGO ======\n");
                printf("1. Você escolherá dois atributos para a batalha.\n");
                printf("2. Os valores dos dois atributos escolhidos serão somados.\n");
                printf("3. A carta com a maior soma final vence a rodada!\n");
                printf("4. Se a soma for igual, o jogo declara Empate.\n\n");
                break;
            
            case 3:
                printf("\n------ SAIR DO JOGO ------\n");
                printf("Você tem certeza que deseja sair?\n");
                printf("1 - SIM\n");
                printf("2 - NÃO\n");
                printf("Escolha: ");
                scanf("%d", &alternativa);

                // Operador ternário elegante para controle do loop do menu principal
                ligado = (alternativa == 1) ? 0 : 1; 
                if (!ligado) {
                    printf("Saindo do Jogo... Até a próxima!\n");
                } else {
                    printf("Voltando para o menu principal!\n");
                }
                break;

            default:
                printf("\nOpção inválida! Por favor, escolha uma opção válida.\n");
                break;
        }
    
        
    return 0;
}