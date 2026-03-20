#include <stdio.h>

    void valor_saque (int saque) {
        int cedulas[7] = {200,100,50,20,10,5,2}; 
            if (saque<2|| saque>1000) {
                printf("Insira um valor valido para saque."); 
                return; 
                }
        else {
             int quantidade[7] = {0,0,0,0,0,0,0};
             int valor = saque; 
            for (int i = 0; i<7; i++) {
                quantidade[i] = valor/cedulas[i];
                valor = valor%cedulas[i];
            }
         printf("Saque: %d\n\n",saque);
            for (int i = 0; i<7; i++) {
                printf("\tTotal de cedulas a emitir (%d reais): %d\n",cedulas[i],quantidade[i]);
            }
        return;
        }
    }

    int main () {
        valor_saque (220);
          valor_saque (100);
            valor_saque (1000);
              valor_saque (350);
                valor_saque (25);
                  valor_saque (75);
                    valor_saque (0);


        
    }