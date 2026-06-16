#ifndef PILHA_H 
#define PILHA_H 

typedef struct pilha pilha; 

pilha*pilha_criar();
int pilha_vazia (pilha*p); 
void pilha_exibir(pilha*p); 
void pilha_destruir(pilha*p); 
int desempilhar(pilha*p); 
int empilhar(pilha*p, int valor);
int pilha_topo(pilha*p); 

#endif