#include <stdio.h>


float retorna_IMC(float altura, float peso) {
	if (altura<=0.0 || peso<=0.0) {
		return 0.0;
	}
	return peso/(altura*altura);
}


int main () {

	float imc = retorna_IMC(1.70,70.0);
	if (imc<18.5) {
		printf("\n\tO imc esta na faixa abaixo do peso!");
	}
	if (imc>=18.5 && imc<=24.9) {
		printf("\n\tO imc esta na faixa de peso normal!");
	}
	if (imc>=25.0 && imc<=24.9) {
		printf("O imc esta na faixa do sobrepeso!");
	}
    if (imc>=30.0) {
        printf("O imc esta na faixa de obesidade!");
    }
    return 0;
}