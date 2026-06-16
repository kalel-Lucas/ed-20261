#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

typedef struct no {
    int valor; 
    struct no*proximo; 
}no; 

struct pilha {
    no*topo; 
}; 

pilha*pilha_criar() {
 pilha*p = malloc(sizeof(pilha));
 if (p == NULL) {
    return NULL; 
 }
p->topo = NULL; 
return p; 
}

int pilha_vazia(pilha*p) {

if (p->topo == NULL) 
    return 1; 

return 0; 
}

int empilhar (pilha*p, int dado) {
no*novo = malloc(sizeof(no)); 
if (novo == NULL) 
    return 0;

novo->valor = dado; 
novo->proximo = p->topo; 
p->topo = novo; 
return 1; 
}

int pilha_topo(pilha*p) {
if (pilha_vazia(p))
    return -1; 

return p->topo->valor; 
}

int desempilhar(pilha*p) {
if (pilha_vazia(p))
    return -1; 

 no *aux = p->topo; 
 int valor = aux->valor; 
p->topo = aux->proximo; 
free(aux); 
return valor; 
}

void pilha_exibir(pilha*p) {
if(pilha_vazia(p)) 
    return; 

no*navegador = p->topo; 
while (navegador != NULL) {
    printf("%d\n",navegador->valor);
    navegador = navegador->proximo; 
}
}

void pilha_destruir(pilha*p) {
if (p == NULL)
    return;
while (!pilha_vazia(p)) {
    desempilhar(p);
}
free(p);
}