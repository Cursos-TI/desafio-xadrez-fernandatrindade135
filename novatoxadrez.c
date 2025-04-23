#include <stdio.h>

int main() {
    // Movimento na horizontal da Torre usando o loop "for" 
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf(" Direita\n");
    }

    // Movimento diagonal do Bispo usando o loop "while"  
    printf("\nMovimento do Bispo: \n");
    int j = 0;
    while (j < 5) {
        printf("cima, Direita\n");
        j++;
    }

    // Movimento da Rainha usando o loop "do-while"
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}