#ifndef LISTA_H 
#define LISTA_H

typedef struct lista_t lista; 

lista*lista_criar();
lista*lista_inserir(lista*l, int valor); 
lista*lista_remover(lista*l, int valor);
lista*lista_buscar(lista*l, int valor); 
void lista_exibir(lista*l); 
bool lista_vazia(lista*l); 
void lista_destruir(lista*l); 

#endif