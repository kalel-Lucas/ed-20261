#include <stdio.h>

int fatoracao_recursiva(int n) {
int fatorial_recursivo = 1;  
if (n==1) {
    return n; 
}
return n*fatoracao_recursiva(n-1);

}

int main () {
int x;
int fatorial = 1;
int resultado_recursivo; 
printf("Insira logo abaixo um numero inteiro positivo para o calculo do fatorial: \n");
scanf("%d",&x);
if (x<=0) {
    printf("Por favor, digite um numero inteiro positivo!");
    return 1; 
}
for (int i = 1; i<=x; i++) {
    fatorial = fatorial*i; 
}
resultado_recursivo = fatoracao_recursiva(x);
printf("Resultado do fatorial por laco: %d\n",fatorial);
printf("Resultado do fatorial por recursividade: %d\n",resultado_recursivo); 
printf("\n\tNo loop, o nivel de complexidade eh O(N), e no fatorial eh O(N) tambem. No caso de parametros de tempo, claro");
printf("\n\tNo caso de preenchimento de espaco em memoria, o loop possui complexidade O(1), e o recursivo tem O(N)\n");

}