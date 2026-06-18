#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    fila*f = criar_fila();
    enfileirar(f, 10);
    enfileirar(f, 20);
    enfileirar(f, 30);
    fila_exibir(f);
    printf("Inicio: %d\n", fila_inicio(f));
    printf("Esta vazia: %d\n", fila_esta_vazia(f));
    desenfileirar(f);
    fila_exibir(f);
    fila_destruir(f);
    return 0;
}