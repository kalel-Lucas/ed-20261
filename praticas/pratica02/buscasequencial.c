#include <stdio.h>

int main () {
    int vetor[100]; 
    int x; 
    int flag = 0; 
    for (int i = 0; i<100; i++) {
        vetor[i] = i+1; 
    }
    printf("DIGITE UM NUMERO PARA QUE POSSAMOS BUSCA-LO NO VETOR: \n");
    scanf("%d",&x);
    for (int i = 0; i<100; i++) {
        if (vetor[i] == x) {
            flag = 1; 
            printf("O numero %d existe e se localiza na posicao [%d]!\n ",x,i);
            break; 
        }
    }
     if (flag == 0) {
         printf("O numero nao esta no vetor!\n");
        }

    //Acredito que o nível de complexidade do algoritmo seja o(n), pois seu tempo de execucao e preenchimento
    //espacial podem crescer a depender do valor de entrada!
    //Acredito que o melhor cenario seria de fato se o elemento estivesse nas primeiras posicoes, e o pior cenario seria se ele estivesse nas ultimas posicoes nou nem existisse no array!

    return 0;
}