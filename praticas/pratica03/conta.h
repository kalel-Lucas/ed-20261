#ifndef CONTA_H 
#define CONTA_H

struct conta_h{
    int numero;
    float saldo;
};

typedef struct conta_h conta;

conta*criar_conta(conta*conta_1);
conta*conta_depositar(conta*conta_1, float valor_deposito);
conta*conta_sacar(conta*conta_1, float valor_saque);
conta*conta_destruir(conta**ponteiro_destruidor); 

#endif