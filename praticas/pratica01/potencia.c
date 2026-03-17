#include <stdio.h>

    float calcula_potencia (float base, float expo) {
        float potencia_temp = 1; 
        for (int i = 0; i<expo; i++) {
            potencia_temp = potencia_temp*base; 
        }
            return potencia_temp; 
    }

    int main () {
      
    }