#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para inicializar o tabuleiro com 0s (água)
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 representa água
        }
    }
}

// Função para exibir o tabuleiro com coordenadas
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Imprimir título
    printf("Batalha Naval\n\n");

    // Imprimir cabeçalho de colunas (1 a 10)
    printf("   ");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d ", i + 1); // Colunas 1 a 10
    }
    printf("\n");

    // Imprimir as linhas (A a J) com o conteúdo do tabuleiro
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        // Imprimir a letra correspondente à linha (A a J)
        printf("%c  ", 'A' + i); // Letras A a J para as linhas

        // Imprimir os valores do tabuleiro (0 ou 3)
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar o navio horizontalmente
void posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha][coluna + i] = 3; // Marca as células do navio
    }
}

// Função para posicionar o navio verticalmente
void posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha + i][coluna] = 3; // Marca as células do navio
    }
}

// Função principal
int main() {
    // Declaração do tabuleiro 10x10
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Nível Novato - Posicionamento dos Navios
    inicializarTabuleiro(tabuleiro);
    
    // Posicionando dois navios: um horizontal e outro vertical
    printf("Posicionando navios...\n");

    // Navio Horizontal (linha 2, coluna 2)
    posicionarNavioHorizontal(tabuleiro, 2, 2);
    // Navio Vertical (linha 4, coluna 6)
    posicionarNavioVertical(tabuleiro, 4, 6);

    // Exibindo o tabuleiro com os navios posicionados
    exibirTabuleiro(tabuleiro);
    
    return 0;
}
