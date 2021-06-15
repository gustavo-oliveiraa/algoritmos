/*2. Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor 
absoluto) elaborando os cálculos matemáticos para isso.*/

#include<stdio.h>
int main(){
	int numero;
	printf("Digite o numero:\n");
	scanf("%d", &numero);
	if(numero < 0){
		numero = -1 * numero;
		printf("O modulo do numero e %d", numero);
	}
	else{
		printf("O modulo do numero e %d", numero);
	}
	return 0;
}
