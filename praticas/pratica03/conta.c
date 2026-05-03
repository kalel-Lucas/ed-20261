#include "conta.h"
#include <stdio.h> 
#include <stdlib.h>

conta*criar_conta(conta*conta_1) {
    conta_1 = calloc(1, sizeof(conta)); 
 if (conta_1 == NULL) {
    return NULL;
    }
    conta_1->numero = rand(); 
    conta_1->saldo = 0.0;
    return conta_1;

}

conta*conta_depositar(conta*conta_1, float valor_deposito) {
if (valor_deposito<=0.0)
        return NULL; 
conta_1->saldo += 1.0; 
return conta_1; 
}

conta*conta_sacar(conta*conta_1, float valor_saque) {
if (valor_saque<= 0.0 || valor_saque>conta_1->saldo)
        return NULL; 
conta_1->saldo=-valor_saque; 
return conta_1; 

}

conta*conta_destruir (conta**conta_1) {
    if (conta_1 == NULL || *conta_1 == NULL) {
        return NULL; 
    }
    free(*conta_1);
    *conta_1 = NULL; 
    return NULL; 
}
