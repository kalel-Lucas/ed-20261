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
        if (i==99 && flag == 0) {
            printf("O numero nao esta no vetor!\n");
            break; 
        }
        
    }
    return 0;
}