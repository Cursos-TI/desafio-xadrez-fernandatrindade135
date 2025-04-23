#include <stdio.h>

int main() {
    // Movimento na horizontal da Torre usando o loop "for"  5 casas para a direita 
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf(" Direita\n");
    }

    // Movimento diagonal do Bispo usando o loop "while"  5 casas para cima e direita 
    printf("\nMovimento do Bispo: \n");
    int j = 0;
    while (j < 5) {
        printf("cima, Direita\n");
        j++;
    }

    // Movimento da Rainha usando o loop "do-while" 8 casas para a esquerda 
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}