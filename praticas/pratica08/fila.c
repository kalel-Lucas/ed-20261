#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no {
    int dado;
    struct no* prox;
}No;

struct fila{
 No*inicio;
 No*fim;
}; 

fila* criar_fila() {
    fila*f = (fila*)malloc(sizeof(fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void enfileirar(fila*f, int valor) {
    No*novo  = (No*)malloc(sizeof(No)); 
    novo->dado = valor; 
    novo->prox = NULL;
    if (f->inicio == NULL && f->fim == NULL) {
    f->inicio = novo;
    f->fim = novo;
    } else {
        f->fim->prox = novo; 
        f->fim = novo;
    }

}

int desenfileirar(fila*f) {
    if (f->inicio == NULL) {
        return -1; 
    }
    No*temp = f->inicio;
    int valor = temp->dado;
    f->inicio = f->inicio->prox;
    if (f->inicio == NULL) {
        f->fim = NULL; 
    }
    free(temp);
    return valor;
}

int fila_inicio(fila*f) {
    if (f->inicio == NULL) {
        return -1; 
    }
    return f->inicio->dado;
}

void fila_exibir(fila*f) {
    No*temp = f->inicio;
    while (temp != NULL) {
        printf("%d ", temp->dado);
        temp = temp->prox;
    }
    printf("\n");
}

int fila_esta_vazia(fila*f) {
    return (f->inicio == NULL);
}

void fila_destruir(fila*f) {
    No*temp = f->inicio;
    while (temp != NULL) {
        No*prox = temp->prox;
        free(temp);
        temp = prox;
    }
    free(f);
}