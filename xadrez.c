#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    #include <stdio.h>

    int main() {
        int escolha, direcao, move, continua;
    
        do {
            // Menu principal 
            do {
                printf("\nEscolha uma peça a ser movida.\n\n");
                printf("1 - Torre\n");
                printf("2 - Bispo\n");
                printf("3 - Rainha\n");
                scanf("%d", &escolha);
    
                if (escolha < 1 || escolha > 3) { //Validação de escolha
                    printf("Opção inválida! Digite 1, 2 ou 3.\n\n");
                }
            } while (escolha < 1 || escolha > 3);
    
            switch (escolha) { //Escolha das peças
                case 1: // Torre
                    printf("Sua peça é a Torre.\n");
                    do {
                        // Menu de direções da Torre  
                        printf("Escolha em qual direção deseja mover a peça.\n\n");
                        for (int i = 1; i <= 4; i++) {
                            printf("%d - ", i);
                            if (i == 1) printf("Acima\n");
                            else if (i == 2) printf("Abaixo\n");
                            else if (i == 3) printf("Lado Direito\n");
                            else if (i == 4) printf("Lado Esquerdo\n");
                        }
                        scanf("%d", &direcao);
    
                        // Validação do movimento 
                        if (direcao >= 1 && direcao <= 4) {
                            do {
                                printf("Quantas casas deseja mover? (1-7): ");
                                scanf("%d", &move);
                                if (move >= 1 && move <= 7) {
                                    printf("Torre andou %d casa(s) ", move);
                                    if (direcao == 1) printf("acima.\n");
                                    else if (direcao == 2) printf("abaixo.\n");
                                    else if (direcao == 3) printf("para o lado direito.\n");
                                    else if (direcao == 4) printf("para o lado esquerdo.\n");
                                } else {
                                    printf("Número inválido! ");
                                }
                            } while (move < 1 || move > 7);
                        } else {
                            printf("Direção inválida!\n"); //Valição da direção
                        }
                    } while (direcao < 1 || direcao > 4);
                    break;
    
                case 2: // Bispo
                    printf("Sua peça é o Bispo.\n");
                    do {
                        // Menu de direções do Bispo 
                        printf("Escolha em qual direção deseja mover a peça.\n\n");
                        for (int i = 1; i <= 4; i++) {
                            printf("%d - ", i);
                            if (i == 1) printf("Diagonal direita acima\n");
                            else if (i == 2) printf("Diagonal esquerda acima\n");
                            else if (i == 3) printf("Diagonal direita abaixo\n");
                            else if (i == 4) printf("Diagonal esquerda abaixo\n");
                        }
                        scanf("%d", &direcao);
    
                        // Validação do movimento 
                        if (direcao >= 1 && direcao <= 4) {
                            do {
                                printf("Quantas casas deseja mover? (1-7): ");
                                scanf("%d", &move);
                                if (move >= 1 && move <= 7) {
                                    printf("Bispo andou %d casa(s) ", move);
                                    if (direcao == 1) printf("diagonal direita acima.\n");
                                    else if (direcao == 2) printf("diagonal esquerda acima.\n");
                                    else if (direcao == 3) printf("diagonal direita abaixo.\n");
                                    else if (direcao == 4) printf("diagonal esquerda abaixo.\n");
                                } else {
                                    printf("Número inválido! ");
                                }
                            } while (move < 1 || move > 7);
                        } else {
                            printf("Direção inválida!\n"); //Valição da direção
                        }
                    } while (direcao < 1 || direcao > 4);
                    break;
    
                case 3: // Rainha
                    printf("Sua peça é a Rainha.\n");
                    do {
                        // Menu de direções da Rainha
                        printf("Escolha em qual direção deseja mover a peça.\n\n");
                        for (int i = 1; i <= 8; i++) {
                            printf("%d - ", i);
                            if (i == 1) printf("acima\n");
                            else if (i == 2) printf("abaixo\n");
                            else if (i == 3) printf("Lado Direito\n");
                            else if (i == 4) printf("Lado Esquerdo\n");
                            else if (i == 5) printf("Diagonal direita acima\n");
                            else if (i == 6) printf("Diagonal esquerda acima\n");
                            else if (i == 7) printf("Diagonal direita abaixo\n");
                            else if (i == 8) printf("Diagonal esquerda abaixo\n");
                        }
                        scanf("%d", &direcao);
    
                        // Validação do movimento 
                        if (direcao >= 1 && direcao <= 8) {
                            do {
                                printf("Quantas casas deseja mover? (1-7): ");
                                scanf("%d", &move);
                                if (move >= 1 && move <= 7) {
                                    printf("Rainha andou %d casa(s) ", move);
                                    if (direcao == 1) printf("acima.\n");
                                    else if (direcao == 2) printf("abaixo.\n");
                                    else if (direcao == 3) printf("para o lado direito.\n");
                                    else if (direcao == 4) printf("para o lado esquerdo.\n");
                                    else if (direcao == 5) printf("diagonal direita acima.\n");
                                    else if (direcao == 6) printf("diagonal esquerda acima.\n");
                                    else if (direcao == 7) printf("diagonal direita abaixo.\n");
                                    else if (direcao == 8) printf("diagonal esquerda abaixo.\n");
                                } else {
                                    printf("Número inválido! ");
                                }
                            } while (move < 1 || move > 7);
                        } else {
                            printf("Direção inválida!\n"); //Validação da direção
                        }
                    } while (direcao < 1 || direcao > 8);
                    break;
            }
    
            // Menu de continuação do jogo
            do {
                printf("\nDeseja continuar a jogar? (1 = Sim ou 2 = Não): ");
                scanf("%d", &continua);
                if (continua != 1 && continua != 2) {
                    printf("Valor inválido! Digite 1 para continuar ou 2 para sair.\n");
                }
            } while (continua != 1 && continua != 2);
    
        } while (continua == 1);
    
        return 0;
    }



    return 0;
}
