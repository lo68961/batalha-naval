#include <stdio.h>

int main() {
   
    int tabuleiro[5][5] = {0}; 

    
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][1] = 1; 
    }

   
    for (int j = 2; j <= 4; j++) {
        tabuleiro[3][j] = 1; 
    }

    
    printf("Coordenadas dos navios:\n\n");

    printf("Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", i, 1);
    }

    printf("\nNavio Horizontal:\n");
    for (int j = 2; j <= 4; j++) {
        printf("(%d, %d)\n", 3, j);
    }

    return 0;
}

