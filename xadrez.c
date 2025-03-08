#include <stdio.h>

// Cria um sistema qu simula a movimentação de peças de xadrez
/*
Torre -> 5 casas para a direita : Direita, Direita, Direita, Direita, Direita.
Bispo -> 5 casas na diagonal cima a direita: (Direita, Cima), (Direita, Cima), (Direita, Cima), (Direita, Cima), (Direita, Cima).
Rainha -> 8 casas para a esquerda: Esquerda, Esquerda, Esquerda, Esquerda, Esquerda, Esquerda, Esquerda, Esquerda.
Cavalo -> Fazer 1 movimento
*/

int main() {
    //Inicializando
    printf("====================================\n");
    printf("Simutaion of Chess\n");
    printf("====================================\n");

    printf("\nAs peças são: \n1. Torre \n2. Bispo \n3. Rainha\nApresentando as movimentações:\n");

    // Declarando variaveis
    int rookMov = 0;
    int queenMov = 0;
    int bishopMov = 1;
    int horseMovIni = 0;
    int horseMovSecond = 0;

    // Iniciando as movimentações
    printf("\n1. Torre:\n");

    while (rookMov < 5)
    {
        // Rodar 5x e para
        rookMov++;
        printf("Direta x%d\n", rookMov);
    }

    printf("Finalizado a movimentação da torre...\n");
    
    printf("2. Bispo: \n");
    
    for (bishopMov; bishopMov <= 5; bishopMov++)
    {
        /*Vai rodar 5 vezes*/
        printf("(Cima e Direita) x%d\n", bishopMov);
    }
    
    printf("Finalizado a movimentação do bispo...\n");
    
    printf("3. Rainha: \n");
    
    do
    {
        // Rodar 8x
        queenMov++;
        printf("Esquerda x%d\n", queenMov);
    } while (queenMov < 8);
    
    printf("Finalizado a movimentação da rainha...\n");
    

    printf("4. Cavalo: \n");

    // Loop Externo
    while (horseMovIni == 0)
    {
        //loop interno
        for (horseMovSecond; horseMovSecond <= 1; horseMovSecond++)
        {
            // 2x para Cima
            printf("Cima\n");
        }
        // 1x para o lado
        printf("Direita\n");
        horseMovIni++;
    }

    printf("\nMovimentos finalizados...\n");

    
    //Finalização
    return 0;
}