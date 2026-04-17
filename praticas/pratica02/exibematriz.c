#include <stdio.h>
#include <time.h>

#define TAM 10

int main() {
    int matriz[TAM][TAM];

    // Preenchendo a matriz com valores simples
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = i * TAM + j;
        }
    }

    clock_t inicio, fim;
    double tempo_duplo, tempo_unico;

    // 
    // 1. Percorrendo com dois laços
    // 
    inicio = clock();

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            // Apenas acesso (simulando processamento)
            int valor = matriz[i][j];
        }
    }

    fim = clock();
    tempo_duplo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    inicio = clock();

    for (int k = 0; k < TAM * TAM; k++) {
        int i = k / TAM;
        int j = k % TAM;
        int valor = matriz[i][j];
    }

    fim = clock();
    tempo_unico = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

   
    printf("Tempo com dois lacos: %f segundos\n", tempo_duplo);
    printf("Tempo com um laco: %f segundos\n", tempo_unico);
    //Ambos apresentam nivel de complexidade O(N^2), pois ambos percorrem a matriz inteira, mas o segundo metodo tem um overhead menor por usar apenas um laco, o que pode resultar em um tempo de execucao ligeiramente menor. 

    return 0;
}