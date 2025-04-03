#include <stdio.h>

int main() {
    // Definição das coordenadas iniciais dos navios
    int x_vertical = 2, y_vertical = 3;   // Posição inicial do navio vertical
    int x_horizontal = 5, y_horizontal = 1; // Posição inicial do navio horizontal
    int tamanho_navio = 3; // Tamanho dos navios (3 células cada)

    // Exibindo as coordenadas do navio vertical
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanho_navio; i++) {
        printf("(%d, %d)\n", x_vertical, y_vertical + i);
    }

    // Exibindo as coordenadas do navio horizontal
    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < tamanho_navio; i++) {
        printf("(%d, %d)\n", x_horizontal + i, y_horizontal);
    }

    return 0;
}