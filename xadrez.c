#include <stdio.h>

// Cria um sistema qu simula a movimentação de peças de xadrez
/*
Casos de Recursividade
Torre -> 5 casas para a direita : Direita, Direita, Direita, Direita, Direita.
Rainha -> 8 casas para a esquerda: Esquerda, Esquerda, Esquerda, Esquerda, Esquerda, Esquerda, Esquerda, Esquerda.

Casos de Loops Complexos e Aninhados
Bispo -> 5 casas na diagonal cima a direita: Cima, Direita, Cima, Direita, Cima, Direita, Cima, Direita, Cima, Direita.
Cavalo -> Fazer 1 movimento (Cima, Cima, Direita)
*/


// Declarando as Funções

void movRook(int squares){ // Funciona com recursividade simples
    if (squares > 0){
        printf("Direita\n");
        movRook(squares - 1);
    }
}

void movQueen(int squares){ // Funciona com recursividade simples
    if (squares > 0){
        printf("Esquerda\n");
        movQueen(squares - 1);
    }
}

void movHorse(int squares){
    // Loop Externo definido, excecutará quantas casas foi solicitado, no caso: 1
    for (int horseMovExtern = 0; horseMovExtern < squares; horseMovExtern++)
    {
        // Loop interno, definido 2 variaveis de controle.
        // Uma de repetição e outra de limite, para executar até 2 vezes 
        for (int horseMovIntern = 0, MAX_horseMovIntern = 2; horseMovIntern < MAX_horseMovIntern; horseMovIntern++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    
}

void movBishop(int squares){
    // Loop Externo definido, excecutará quantas casas foi solicitado.
    for (int bishopMovExtern = 0; bishopMovExtern < squares; bishopMovExtern++)
    {
        // Loop interno, executa 1 vez fixo.
        for (int bishopMovIntern = 0; bishopMovIntern < 1; bishopMovIntern++)
        {
            printf("Direita\n");
        }
        printf("Cima\n");
    }
    
}

int main() {
    //Inicializando
    printf("====================================\n");
    printf("Simutaion of Chess\n");
    printf("====================================\n");

    printf("\nAs peças são: \n1. Torre \n2. Bispo \n3. Rainha\n4. Cavalo \nApresentando as movimentações:\n");

    // Iniciando as movimentações
    printf("\n1. Torre:\n");

    movRook(5);

    printf("Finalizado a movimentação da torre...\n");
    
    printf("2. Bispo: \n");
    
    movBishop(5);
    
    printf("Finalizado a movimentação do bispo...\n");
    
    printf("3. Rainha: \n");
    
    movQueen(8);
    
    printf("Finalizado a movimentação da rainha...\n");
    

    printf("4. Cavalo: \n");

    movHorse(1);

    printf("\nMovimentos finalizados...\n");
    
    //Finalização
    return 0;
}