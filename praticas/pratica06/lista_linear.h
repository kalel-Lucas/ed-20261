#ifndef LISTA_H 
#define LISTA_H

typedef struct lista lista; 

lista* lista_criar(lista*l);
lista*lista_inserir(lista*l, int valor); 
void lista_remover(lista*l, int valor);
lista*lista_buscar(lista*l, int valor); 
void lista_exibir(lista*l); 
lista*lista_vazia(lista*l); 
void lista_destruir(lista*l); 

#endif