#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "lista_linear.h"

typedef struct no_t{
    no*anterior; 
    int dado;
    no*proximo;
}no;

struct lista_t {
    no*primeiro; 
    no*ultimo; 
}; 

lista*lista_criar() {
  lista*l = malloc(sizeof(lista));
  if (l == NULL) 
    return NULL; 
 l->primeiro = NULL; 
 l->ultimo = NULL; 
    return l; 
}

bool lista_vazia(lista*l) {
    if (l->primeiro == NULL && l->ultimo == NULL)
        return true; 
    else 
        return false; 
}

lista*lista_inserir(lista*l,int valor) {
 no*novo = malloc(sizeof(no)); 
    if (novo == NULL) 
    return NULL; 
 novo->dado = valor; 
    if (l->primeiro == NULL && l->ultimo == NULL) {
        novo->anterior = NULL;
        novo->proximo = NULL; 
        l->primeiro = novo; 
        l->ultimo = novo; 
        return l; 
    }
l->ultimo->proximo = novo; 
novo->anterior = l->ultimo; 
l->ultimo = novo;
novo->proximo = NULL;
return l; 

}

void lista_exibir (lista*l)
{
    no*atual = l->primeiro; 
    while(atual != NULL) {
        printf("%d ", atual->dado); 
        atual = atual->proximo; 
    }
    printf("\n"); 
}

void lista_destruir(lista*l) {
    no*atual = l->primeiro; 
    while(atual != NULL) {
        no*temp = atual; 
        atual = atual->proximo; 
        free(temp); 
    }
    free(l); 
}


