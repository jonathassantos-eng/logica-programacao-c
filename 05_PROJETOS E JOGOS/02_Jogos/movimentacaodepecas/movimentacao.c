#include <stdio.h>

int main() {
    // Declaração das variáveis das outras peças
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;
    
    // Variáveis para o Cavalo (2 para baixo, 1 para a esquerda)
    int cavaloBaixo = 2;
    int cavaloEsquerda = 1;
    int passoEsquerda = 0; // Auxiliar para o loop while do Cavalo

    // Variáveis auxiliares para os laços while e do-while das outras peças
    int passoBispo = 0;
    int passoRainha = 0;

    // --- SIMULAÇÃO DA TORRE ---
    printf("Movimentacao da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n-----------------------------------\n\n");

    // --- SIMULAÇÃO DO BISPO ---
    printf("Movimentacao do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (passoBispo < movimentosBispo) {
        printf("Cima Direita\n");
        passoBispo++; 
    }

    printf("\n-----------------------------------\n\n");

    // --- SIMULAÇÃO DA RAINHA ---
    printf("Movimentacao da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        passoRainha++; 
    } while (passoRainha < movimentosRainha);

    printf("\n-----------------------------------\n\n");

    // --- SIMULAÇÃO DO CAVALO (NÍVEL AVENTUREIRO) ---
    printf("Movimentacao do Cavalo (2 casas para Baixo e 1 para a Esquerda):\n");
    
    // Loop 'for' externo controla o movimento vertical (Baixo)
    for (int i = 0; i < cavaloBaixo; i++) {
        printf("Baixo\n");
        
        // Quando o 'for' chegar no último passo para baixo (i == 1),
        // o loop 'while' interno é ativado para mover para a esquerda, formando o "L"
        if (i == 1) {
            while (passoEsquerda < cavaloEsquerda) {
                printf("Esquerda\n");
                passoEsquerda++;
            }
        }
    }

    printf("\nSimulacao concluida com sucesso!\n");

    return 0;
}