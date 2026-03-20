#include <stdio.h>

    void calcula_potencia (float base, float expo) {
        if (expo<=0) {
            printf("\n\tPor favor, digite um expoente inteiro positivo!");
        }
        else if (expo>0) {
            int potencia_temp = 1; 
        for (int i = 0; i<expo; i++) {
            potencia_temp = potencia_temp*base; 
        }
        printf("\n\tResultado: %d",potencia_temp);
    }
}   

    int main () {
      calcula_potencia(2,4);
         calcula_potencia(4,4);
          calcula_potencia(1,1);
            calcula_potencia(2,0);
                calcula_potencia(10,3);
    }