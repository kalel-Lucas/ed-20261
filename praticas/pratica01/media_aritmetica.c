#include <stdio.h>

void envia_media(int n) {
    int vetor_numeros[n];
    int armazena_numeros = 0; 
    float media; 
    for (int i = 0; i<n; i++) {
        printf("\n\tDigite o numero na posicao[%d]",i);
        scanf("%d",&vetor_numeros[i]);
        armazena_numeros = armazena_numeros+vetor_numeros[i];
    }
    media = (float) armazena_numeros/n;
    printf("Media aritmetica final: %.1f",media);
    }

int main () {
    
    envia_media(5);
    envia_media(7);
    envia_media(4);
    envia_media(3);
    envia_media(1);
    envia_media(0);
    envia_media(2); 
}