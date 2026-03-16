#include <stdio.h>

    float calcula_potencia (float base, float expo) {
        float potencia_temp = 1; 
        for (int i = 0; i<expo; i++) {
            potencia_temp = potencia_temp*base; 
        }
            return potencia_temp; 
    }

    int main () {
        int num_expo;
        float num_base; 
        float resultado_potencia; 
        while (1) {
            printf("\n\tPor favor, me mande o numero da base:\n");
            scanf("%f",&num_base);
            printf("\n\tAgora, um numero natural diferente de zero para o expoente:\n");
            scanf("%d",&num_expo);
            if (num_expo<0) {
                printf("\n\tNumero de expoente invalido!");
            }
            else if (num_expo>0) {
                resultado_potencia = calcula_potencia(num_base,num_expo);
                printf("\n\tResultado: %.1f",resultado_potencia);
            }
        }
    }