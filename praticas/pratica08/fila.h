#ifndef FILA_H 
#define FILA_H 

typedef struct fila fila; 

fila*criar_fila(); 
void enfileirar(fila*f,int valor); 
int desenfileirar(fila*f);
int fila_inicio(fila*f); 
void fila_exibir(fila*f); 
int fila_esta_vazia(fila*f); 
void fila_destruir(fila*f); 

#endif 