#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    pilha*p = pilha_criar(); 
    if (p == NULL) {
        printf("Erro ao criar a pilha\n"); 
        return 1; 
    }

    empilhar(p, 10); 
    empilhar(p, 20); 
    empilhar(p, 30); 

    printf("Topo da pilha: %d\n", pilha_topo(p)); 

    printf("Desempilhando: %d\n", desempilhar(p)); 
    printf("Novo topo da pilha: %d\n", pilha_topo(p)); 

    pilha_exibir(p); 

    pilha_destruir(p); 

    return 0; 
}