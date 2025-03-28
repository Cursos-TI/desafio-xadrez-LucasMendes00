#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i;
    // Mover a rainha 8 casas para esquerda
    while (i < 8)
    {
        printf("Movar a Rainha para Esquerda\n");
        i++;
    }
    printf("\n");

    i = 0; // Reinicializar a variável

    // Mover o bispo 5 casas para diagonal direita
    do
    {
        printf("Mover o Bispo para diagonal Direita\n");
        i++;
    } while (i < 5);

        printf("\n");

    // Mover a torre 5 casas para a direita
    for (i = 0; i < 5; i++)
    {
        printf("Mover a Torre para Direita\n"); // Imprime a direção do movimento
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
