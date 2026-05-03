#include "conta.h"
#include <stdio.h> 

int main () {
    conta*conta_main = criar_conta(conta_main); 
    if (conta_main == NULL) {
        printf("Erro ao criar conta.\n");
        return 1; 
    }
    printf("Conta criada com numero: %d e saldo: %.2f\n", conta_main->numero, conta_main->saldo);
    
    conta_depositar(conta_main, 100.0); 
    printf("Saldo apos deposito: %.2f\n", conta_main->saldo);
    
    conta_sacar(conta_main, 30.0); 
    printf("Saldo apos saque: %.2f\n", conta_main->saldo);
    
    conta_destruir(&conta_main); 
    if (conta_main == NULL) {
        printf("Conta destruida com sucesso.\n");
    } else {
        printf("Erro ao destruir conta.\n");
    }
    
    return 0;
}