#include <stdio.h>


float retorna_IMC(float altura, float peso) {
    float imc = peso/(altura*altura); 
	if (altura<=0.0 || peso<=0.0) {
		return 1;
    }
	if (imc<18.5) {
		printf("\n\tO imc esta na faixa abaixo do peso!");
	}
	if (imc>=18.5 && imc<=24.9) {
		printf("\n\tO imc esta na faixa de peso normal!");
	}
	if (imc>=25.0 && imc<=29.9) {
		printf("\n\tO imc esta na faixa do sobrepeso!");
	}
    if (imc>=30.0) {
        printf("\n\tO imc esta na faixa de obesidade!");
    } 

    return 0; 
}


int main () {

    retorna_IMC(1.76,66.5); 
    retorna_IMC(1.97,0.0);
    retorna_IMC(1.50,42.0);
    retorna_IMC(1.85,100.0);
    retorna_IMC(1.68,75.2);
     retorna_IMC(1.56,55.6);

    return 0;
}