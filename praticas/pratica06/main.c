 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
#include "lista_linear.h"

int main () {
    lista*l = lista_criar(); 
    if (l == NULL) {
        printf("Erro ao criar a lista\n");
        return 1; 
    }
    l = lista_inserir(l, 10); 
    l = lista_inserir(l, 20); 
    l = lista_inserir(l, 30); 
    printf("Lista após inserções: ");
    lista_exibir(l); 

    l = lista_remover(l, 20); 
    printf("Lista após remoção de 20: ");
    lista_exibir(l); 

    no*encontrado = lista_buscar(l, 30); 
    if (encontrado != NULL) {
        printf("Valor 30 encontrado na lista\n");
    } else {
        printf("Valor 30 não encontrado na lista\n");
    }

    lista_destruir(l); 
    return 0;
}
